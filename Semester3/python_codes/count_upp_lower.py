upper_count=0
lower_count=0
digit_count=0
special_count=0
s=input("Enter the string:")
for i in s:
    if(i.isupper()):
        upper_count+=1
    elif(i.islower()):
        lower_count+=1
    elif(i.isdigit()):
        digit_count+=1
    elif(i.isalnum()):
        special_count+=1
print(upper_count)
print(lower_count)
print(digit_count)
print(special_count)