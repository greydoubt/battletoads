    let cv;
    let cvReady = false;
    async function onOpenCvReady() {
      cv = await window.cv
      cvReady = true;
      document.getElementById('status').innerHTML = 'OpenCV.js のロードが完了しました。';
    }

    // FileReader を用いて画像ファイルを読み込み、Image オブジェクトとして返す
    function loadImage(fileInput, callback) {
      let file = fileInput.files[0];
      if (!file) return;
      let reader = new FileReader();
      reader.onload = function(e) {
        let img = new Image();
        img.onload = function() {
          callback(img);
        }
        img.src = e.target.result;
      }
      reader.readAsDataURL(file);
    }

    // ボタン押下時の処理
    document.getElementById('stitchButton').addEventListener('click', function() {
      if (!cvReady) {
        alert('OpenCV.js がまだロードされていません！');
        return;
      }
      let input1 = document.getElementById('imageInput1');
      let input2 = document.getElementById('imageInput2');
      if (input1.files.length === 0 || input2.files.length === 0) {
        alert('2 枚の画像ファイルを選択してください。');
        return;
      }
      // 並列に画像を読み込み
      loadImage(input1, function(img1) {
        loadImage(input2, function(img2) {
          stitchImages(img1, img2);
        });
      });
    });

    // 2 枚の画像を読み込み、ORB で特徴抽出・マッチング、ホモグラフィ求めて合成する関数
    function stitchImages(img1, img2) {
      // 画像を一旦 Canvas に描画して cv.imread で読み込めるようにする
      let canvas1 = document.createElement('canvas');
      let canvas2 = document.createElement('canvas');
      canvas1.width = img1.width; canvas1.height = img1.height;
      canvas2.width = img2.width; canvas2.height = img2.height;
      let ctx1 = canvas1.getContext('2d');
      let ctx2 = canvas2.getContext('2d');
      ctx1.drawImage(img1, 0, 0);
      ctx2.drawImage(img2, 0, 0);

      // cv.Mat に変換
      let mat1 = cv.imread(canvas1);
      let mat2 = cv.imread(canvas2);

      // グレースケール変換
      let gray1 = new cv.Mat();
      let gray2 = new cv.Mat();
      cv.cvtColor(mat1, gray1, cv.COLOR_RGBA2GRAY);
      cv.cvtColor(mat2, gray2, cv.COLOR_RGBA2GRAY);

      // ORB による特徴点検出と記述子抽出
      let orb = new cv.ORB(); // ※ OpenCV.js のバージョンによっては cv.ORB_create() の形式の場合もあります
      let keypoints1 = new cv.KeyPointVector();
      let keypoints2 = new cv.KeyPointVector();
      let descriptors1 = new cv.Mat();
      let descriptors2 = new cv.Mat();
      orb.detectAndCompute(gray1, new cv.Mat(), keypoints1, descriptors1);
      orb.detectAndCompute(gray2, new cv.Mat(), keypoints2, descriptors2);

      // BFMatcher（Hamming 距離）を用いてマッチング
      let bf = new cv.BFMatcher(cv.NORM_HAMMING, true);
      let matches = new cv.DMatchVector();
      bf.match(descriptors1, descriptors2, matches);

      // マッチング結果から上位 N 件（ここでは 50 件）を選択
      let goodMatches = [];
      for (let i = 0; i < matches.size(); i++) {
          goodMatches.push(matches.get(i));
      }
      goodMatches.sort((a, b) => a.distance - b.distance);
      let numGoodMatches = Math.min(50, goodMatches.length);

      // マッチした特徴点から対応点の配列を作成
      let srcPoints = [];
      let dstPoints = [];
      for (let i = 0; i < numGoodMatches; i++) {
          let kp1 = keypoints1.get(goodMatches[i].queryIdx).pt;
          let kp2 = keypoints2.get(goodMatches[i].trainIdx).pt;
          // 画像1側の座標、画像2側の座標
          srcPoints.push(kp1.x);
          srcPoints.push(kp1.y);
          dstPoints.push(kp2.x);
          dstPoints.push(kp2.y);
      }
      // cv.matFromArray(row, col, type, array) で変換
      let srcMat = cv.matFromArray(numGoodMatches, 1, cv.CV_32FC2, srcPoints);
      let dstMat = cv.matFromArray(numGoodMatches, 1, cv.CV_32FC2, dstPoints);

      // RANSAC を用いてホモグラフィ行列を求める
      let mask = new cv.Mat();
      let homography = cv.findHomography(dstMat, srcMat, cv.RANSAC, 5, mask);

      // 結果画像用のキャンバスサイズを決定（ここでは横に並べられるように大きめに）
      let resultWidth = mat1.cols + mat2.cols;
      let resultHeight = Math.max(mat1.rows, mat2.rows);
      let result = new cv.Mat();
      cv.warpPerspective(mat2, result, homography, new cv.Size(resultWidth, resultHeight));
      // mat1 を結果画像にコピー（座標は (0,0) とする）
      let roi = result.roi(new cv.Rect(0, 0, mat1.cols, mat1.rows));
      mat1.copyTo(roi);
      roi.delete();

      // 合成結果を画面上の Canvas に表示
      cv.imshow('canvasOutput', result);

      // 使用したリソースを解放
      mat1.delete(); mat2.delete();
      gray1.delete(); gray2.delete();
      orb.delete(); keypoints1.delete(); keypoints2.delete();
      descriptors1.delete(); descriptors2.delete();
      bf.delete(); matches.delete();
      srcMat.delete(); dstMat.delete();
      mask.delete(); homography.delete(); result.delete();
    
