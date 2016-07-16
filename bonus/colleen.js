/*comment1*/
function a(){
    // comment2
    return ("/*comment1*/\n"+a.toString()+"\nconsole.log(a());");
}
console.log(a());
