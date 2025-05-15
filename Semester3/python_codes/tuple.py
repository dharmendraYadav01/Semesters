# declare a tuple------------

# type1

a=(10,20.55,True)
print(type(a))
print(a)

# type2

c=10,49.44,False
print(type(c))
print(c)

# type3

x=tuple([22,"abc",False])
print(type(x))
print(x)

# type4(nested tuple)
t1=(10,44,False)
t2=("a","z",10.22)
t3=("abc",True,123)
t4=(t1,t2,t3)
print(t4[1])
print(t4[1][0])
# for i in t4:
#     print(i,end=" ")

for i in t4:
    for j in i:
        print(j,end=" ")
# we delete a whole tuple but not element in tuple
del a

print(t1[2:5])
print(t1[:])
print(t1[::2])
print(t1[2:6:2])
print(t1[-5:-1])
print(t1[::])
print(t1[::-1])
print(t1[::-2])
t1=(3,5)
t2=(5,5)
if t1>t2:
    print("t1 is bigger")
else:
    print("t2 is bigger")
print(min(t1))
print(max(t1))
list2=("as","abcd","edcf","qazx","ab","abcda","azb")
print(min(list2))
print(max(list2))
print("``````````````````````````````````````````")
tuple1=("ab","abcd","edcf","ab","ab","abcda","azb")
print(tuple1.index("ab"))
print(tuple1.index("ab",2)) #start from index 2
print(tuple1.index("ab",4))
# use of all() keyword ---------------------
t1=("ab",20)
print(all(t1))
# use of any() keyword ---------------------
t1=(True,"ab",0)
print(any(t1))
# use of sorted() keyword ---------------------
t1=(9,3,2,8,1,2,5)
print(sorted(t1))
t2=('sri','manish','dande','kumar')
print(sorted(t2))
# use of sum() keyword ---------------------
t1=(9,4,3,6,3)
print(sum(t1))
# import keyword to whole file
# from random import (only import file)