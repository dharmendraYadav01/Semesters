// Method first

function sum(a,b){
let c=a+b;
    document.writeln(c);
    
}
sum(2,3);
document.writeln("<br>");

// Method second
var x=(a,b)=>
{
    let c=a+b;
    document.writeln(c);
}
x(2,3);

// DOM concepts--document object model
// --selecting with id.
// ex. document.getElementById("myId")
// --selecting with class.
// ex. document.getElementByClassName("myClass")
// --selecting with tag.
// ex. document.getElementByTagName("p")