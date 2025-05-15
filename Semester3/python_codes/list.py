# # # different notation of define a list..........
# # l1=[1,2,"ABC",12.54]   #1
# # l2=list(1,4,"xy",True)  #2
# # t=(1,2,3,4)  #3
# # l3=list(t)   #4
# t=(1,2,3,4,5,6)
# c1=[x for x in t if x%2==0]
# print(c1)
# c2=[x for x in t]
# print(c2)
# l1=[1,2,"ABC",12.54,True,False,"ABC",[1,3,5,5]]
# print(l1[2])
# print(l1[-4])
# print(l1[2:-1])
# print(l1[2:])
# print(l1[::-1])
# l=[1,2,3.33,1001,20203]
# print(len(l))
# print(max(l))
# print(min(l))
# print(l1.index("ABC"))
# print(l1.count("ABC"))
# print(l1.index("ABC",3,7))
# l1.append("XYZ") 
# l1.extend([10,True,10.34]) #add multiple element in list
# l1.insert(2,3) #index,value
# l1.remove("ABC")
# print(l1.pop()) #remove element form last by default and 1 time give output
# print(l1.pop(2)) 
# #l1.clear()  it clear element in list but list is still exist and only delete element in list
# print(l1)x = 20
# x=20
# def example():
#     global x
#     x = x + 5
# example()
# print("Value of x outside a function :", x)
# a=('super')
# print(type(a))   
st="ab"
print(st*3) # * is used for repeat string
