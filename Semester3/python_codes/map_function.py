# MAP():)higher order function:-
# The map() function is used to apply a given function to every item of an iterable.such as a list or tuple and returns a map object(which is an iterator) 
s=['1','2','3','4']
res= map(int,s)
print(list(res))
# syntax of the map() function
# map(function, iterable)
# parameter:
# function: a function we went to apply to every element of the iterable.
# iterable: The iterable whose elements we want to process.
# NOTE:We can also pass multiple iterable if our function accepts multiple arguments.
# CONVERTING MAP OBJECT TO A LIST
# by default,the map() function returns return a map object,which is an iterator.in many cases we will need to convert this iterator to a list to work with the result directly.
a=[1,2,3,4]
# using custom function in "Function"parameter
# This function is simply double the provide number
def double(val):
    return val*2
res=list(map(double,a))
print(res)
# map() with lambda
a=[1,2,3,4]
res=list(map(lambda x:x*2,a))
print(res)
# ...........................................................................
fruit=['apple','banana','cherry']
res=map(str.upper,fruit)
print(list(res))
# .............................................................................
words=['apple','banana','cherry']
res=list(map(lambda x:s[0]))
print(res)
# reduce(function, collection,initializer)
# the reduce function is used to apply a particular function is passed in itz argument in all of the list element mationed in the sequence passed along.
# this function is functools keyword
from functools import reduce
def add(a,b):
    return a+b
num_list=[1,2,3,4,5,6,7,8,9,10]
sum=reduce(add,num_list)
print(f"sum of the integers of num_list : {sum}")
sum=reduce(add,num_list,10)
print(f"Sum of the integer of num_list with initial value 10 is:")
# factorial....................................
from functools import reduce
my_list=[1,2,3,4,5]
product=reduce(lambda x,y:x*y,my_list)
print(product)

