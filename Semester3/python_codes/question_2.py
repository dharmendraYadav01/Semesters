#3.Wap to find diffenence of two small integers(not greatre then 10)without using minus(-)operator.[hint-use ^operator].
num1=int(input("Enter the first number:"))
num2=int(input("Enter the second number:"))
diff=num1^num2
if(diff>10):
    diff=10-(diff^10)
    print("Difference of two number is",diff)    
