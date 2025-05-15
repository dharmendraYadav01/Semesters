# lambda function(anonymous)
# a function without name called lambda function or anonymous faction lambda is keyword for defining anonymous function
cube=lambda a:a*a*a # a is parameter .
print(cube(5))
# recursion function-when a function call itself inside its body is called recursion.
#EXAMPLE 1
# def show():
#     print("hello")
#     show() #infinity loop output

#EXAMPLE 2
# count=0
# def show(a):
#     print(a)
#     count=count+1
#     if(a<=a*10):
#         a=a*count
#         show(a)
# show(5)

#EXAMPLE 3
# def fact(a):
#     if(a==0):
#         return 1
#     else:
#         return a*fact(a-1)
# print(fact(5))

#EXAMPLE 4
# c="PSIT"
# def show():
#     section ="CS-II-C" #local variable
#     return(section)
#     return(c)
# show()
# # print(section) #here it give error becoz section is not global variable
# print(c) #here c is global variable

#EXAMPLE 5
# def show():
#     s="local variable"
#     print(s)
# s="global variable" # start from here
# show()
# print(s)

#EXAMPLE 6
# def show():
#     global s
#     s="local variable"
#     print(s)
# s="global variable" # start from here
# print(s)
# show()
# print(s)
 
#EXAMPLE 7
# a="global"
# def show():
#     a="local"
#     print(a)
#     def display():
#         a="inner local"
#         print(a)
#     display()
# show()
# print(a)

#EXAMPLE 8
a="global"
def show():
    a="show()"
    print(a)
    def display():
        nonlocal a
        a="change" 
        print(a)
    display()
    print(a)
show()
print(a)