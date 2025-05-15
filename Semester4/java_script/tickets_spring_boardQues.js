function calculate(x)
{
    if(x<=2)
    {
        document.writeln(9*x);   
    }
    else if(x>=6)
    {
        document.writeln("Booking not allow");
    }
    else
    {
        discount(x);
    }
}

function discount(x)
{
    let y=9;
    let z=5;
    for(var i=1;i<=x;i++){
        var a=y*(1-z/100);
        document.writeln(a);
        document.writeln("<br>");
        z=z+2;
    }
}
var x= parseInt(prompt("Enter the value of ticket:"));
calculate(x);
