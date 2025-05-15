// var x =[1,2,3,'a']
// for(var i=0;i<x.length;i++){
//     document.writeln(x[i]+"<br>");
// }
// ........................................................................................................................
var x =[1,2,3,'a']
var y =["a","b","c"]
var z=x.concat(y);
document.writeln(x+"<br>");
document.writeln(y+"<br>");
document.writeln(z);
document.writeln("<br>")
//..............using pop individually........................................
z.pop();
document.writeln(z+"<br");
//.........................using pop in loop..............................
l=z.length;
for(var i=0;i<l;i++){
    document.writeln("Extracted element:"+z.pop()+"<br>")
}
//......................push function.....................................
//reverse keyword
//slice keyword