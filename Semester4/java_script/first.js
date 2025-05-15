// write a javascript program that takes a number representing a day of the week (1 for sunday ,2 for monday ,etc)and prints the corresponding day name
var x=parseInt(prompt("Enter the value"));
switch(x){
    case 1:
        document.writeln("Sunday");
        break;
    case 2:
        document.writeln("Monday");
        break;
    case 3:
        document.writeln("Tuesday");
        break;
    case 4:
        document.writeln("Wednesday");
        break;
    case 5:
        document.writeln("Thursday");
        break;
    case 6:
        document.writeln("Friday");
        break;
    case 7:
        document.writeln("Saturday");
        break;
    default:
        document.writeln("Invalid day");
}