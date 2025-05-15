#  Function declaration
# def functionName(a,b):  => def is keyword and a,b are parameter argument and it optional  
#  some code.....................
#  return some_value => return is optional

# TYPE1
def add1(a,b):
    return a+b
a=add1(10,20) # 10,20 are actual parameter and add1 in function calling
print(a)  #output 30

# TYPE2
def add2(a,b):
    print("sum is",a+b)
add2(10,20)
print(add2(20,30))
#  their are two type of function in python: 1.built in library function 2.user define function
# 1:)built in library:we use def keyword for creating function followed by function name after creating a function we can calling by using the name of function.
# 2:)user define function:we use def keyword for creating function followed by function name after creating a function we can calling by using the name of function.
# TYPE of function argument
# 1.default argument
# EXAMPLE:
def show(x,y=20):
    print("value of x:"+x)
    print("value of y:"+y)
show(10)
show(20,30)
show()
# 2.keyword argument
# 3. position argument
# 4. arbitrary argument
