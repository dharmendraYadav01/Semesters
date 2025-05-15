#write a program to find biggest or maximum of given 3 number from the command prompt.
num1=int(input("Enter the first number:"))
num2=int(input("Enter the second number:"))
num3=int(input("Enter the third number:"))
if num1>num2:
    if num1>num3:
        print("the biggest number is:",num1)
elif num2>num3:
        print("the biggest number is:",num2)
else:
    print("the biggest number is:",num3)