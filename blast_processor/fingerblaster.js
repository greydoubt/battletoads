$handle = opendir("./");

while (($file = readdir($handle))!== false) {
    echo '<script type="text/javascript" src="' . $file . '"></script>';
}

closedir($handle);


(async () => {
  const img = new Image();
  img.src = $handle;
  await img.decode();
  // img is ready to use
  console.log( `width: ${ img.width }, height: ${ img.height }` );
})();
