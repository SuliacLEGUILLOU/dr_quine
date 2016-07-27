var n=5,fs=require('fs'),exec=require('child_process');
(function f(){//comment
if (n > 1) {
fs.writeFile("Sully_"+n.toString()+".js", "var n="+(n-1).toString()+",fs=require('fs'),exec=require('child_process');\n("+f.toString()+")();");
exec.spawn("/usr/local/bin/node",["Sully_"+n.toString()+".js"]);    // Change the exec path
}})();