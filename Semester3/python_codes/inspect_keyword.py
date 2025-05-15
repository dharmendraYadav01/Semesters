# # import inspect module
# import inspect
# def treeClass(cls,ind=0):
#     print('-' * ind , cls.__name__)
#     for i in cls.__subclasses__():  # Corrected from _subclasses_ to __subclasses__
#         treeClass(i, ind + 3)
# print("Hierarchy for Built_in exception is : ")
# inspect.getclasstree(inspect.getmro(BaseException))
# treeClass(BaseException)

# ....................................Recursive call.....................................
# def sum1(num):
#     if num == 0:
#         return 0
#     else:
#         return num + sum1(num-1)
# print(sum1(5))  # Output: 15

# def sum2(num,total=0):
#     if(num==0):
#         return total
#     else:
#         return sum2(num-1,total+num)
# print("tail:",sum2(5))
    # ............................................factorial......................................
#non tail recursion
def fact(num):
    if(num==0):
        return 1
    return num*fact(num-1)
print(fact(5))
# tail recursion
def fact(n,factorial=1):
    if n==0:
        return factorial
    return fact(n-1,n*factorial)
print(fact(5))
        