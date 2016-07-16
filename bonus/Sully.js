var n = 5,fs = require('fs'),exec = require('child_process');
(function f(){//comment
    fs.writeFile("Sully_"+(n-1).toString()+".js", "var n = "+(n-1).toString()+",fs = require('fs'),exec = require('child_process');\n("+f.toString()+")();");
    if (n > 1)
        exec.spawn("/usr/local/bin/node", [ "Sully_"+(n-1).toString()+".js" ]);    // Change the exec path
})();