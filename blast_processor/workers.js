
//  for serverless
// $handle
$handle = opendir("./");
function loadScript (dir, file) {
 var scr = document.createElement("script");
 scr.src = dir + file;
 document.body.appendChild(scr);
 }
