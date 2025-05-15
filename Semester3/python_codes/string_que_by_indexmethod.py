# WAP to accept some string from the keyboard and display its characters by index wise(both positive and negative index)
s=input("Enter some string:")
i=0
for x in s:
    print("the character present at positive index {} and at negative index {} is {}".format(i,i-len(s),x))
    i=i+1