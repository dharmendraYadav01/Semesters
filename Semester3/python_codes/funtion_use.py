'''keyword try use:'''
# a=[10,20,30]
# try:
#     print(a[1])
#     print(a[3])
# except: 
#     print("this is not in range")

# use of except keyword:
#EXAMPLE 1;
def fun(a):
    if a<4:
        b=a/(a-3)
    print("value of b =",b)
try:
    fun(3)
    fun(5)
except ZeroDivisionError:
    print("ZeroDivisionError occurred and Handled")
except NameError:
    print("NameError occurred and Handled")
  #EXAMPLE 2;  
def fun(a):
    if b<4:
        b=a/(a-3)
    print("value of b =",b)
try:
    fun(3)
    fun(5)
except ZeroDivisionError:
    print("ZeroDivisionError occurred and Handled")
except NameError:
    print("NameError occurred and Handled")
    
#EXAMPLE 3;
def fun(a):
    if a<4:
        b=a//0; # <---------- here zero
    print("value of b =",b)
try:
    fun(3)
    fun(5)
except ZeroDivisionError:
    print("ZeroDivisionError occurred and Handled")
except NameError:
    print("NameError occurred and Handled")
finally:
    print("This is always execute")    
    
#try and expect :)
#it use to catch an handle exception in python statement that can raised exception reaped inside a try block and the statement that handle the exception are written inside a except block
#Finally:) this keyword always executed after the try and except block the code inside a finally block is always executed
