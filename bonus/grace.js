var fs = require('fs');
(function f(){//comment
    fs.writeFile("grace_kid.js", "var fs = require('fs');\n("+f.toString()+")();")
})();