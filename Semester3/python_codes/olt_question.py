#question 1

# x = "abcdefg"
# y = [x[i:i+2] for i in range(0, len(x), 2)]
# print(y)

#question 2

# tuple = {}

# tuple[(1,2,4)] = 8

# tuple[(4,2,1)] = 10

# tuple[(1,2)] = 12

# _sum = 0

# for k in tuple:

#     _sum += tuple[k]

# print(len(tuple) + _sum)
# s1={3, 4}

# s2={1, 2}

# s3=set()

# i=10

# j=10

# for i in s1:

#     for j in s2:

#         s3.add((i,j))

#         i-=1

#         j-=1

# print(s3)
# names = ['Amir', 'Bear', 'Charlton', 'Daman']

# print(names[-1][-1])
# l=[1, 0, 2, 0, 'hello', '', []]
# l1=list(filter(bool, l))   #filter return the true value 
# print(l1)

# Dictionary me same key nahi hoti but value same ho sakte hai  

#Exception:

#syntax Error:when we write wrong syntax such as mis spell keyword or missing keyword or an unbalanced parenthesis
#Type Error: adding a string to  an integer.
#name error: when a variable or function name is not found.
#index error: when an index is out of range for list, tuple or other sequence type.
#key error: in dictionary key is nit define.
#Zero division error:EX: c=a/0;

# question 1:

# x = (i for i in range(3))
# for i in x:
#     print(i)
# for i in x:
#     print(i)

# question 2:

# def fun2(gems_list, price_list, reqd_gems,reqd_quantity):
#     amount=0
#     for gem in reqd_gems:
#         if gem not in gems_list:
#             return -1
#         index=gems_list.index(gem)
#         price=price_list[index]
#         amount=amount+(price*reqd_quantity[reqd_gems.index(gem)])
#     if amount >30000:
#         amount=amount*0.95
#     return amount
# gems_list=['Beryl', 'Garnet', 'Quartz']
# price_list=[8723, 2346, 7532]
# reqd_gems=['quartz']
# reqd_quantity=[10]
# amount=fun2(gems_list, price_list, reqd_gems, reqd_quantity)
# print(amount)

# question 2:

# def fun4(airline,source,destination,no_of_passengers):
#     ticket_number_list=[]
#     for i in range(1,no_of_passengers+1):
#         ticket=airline+":"+source[0:3]+":"+destination[0:3]+":"+str(100+i)
#         ticket_number_list.append(ticket)
#     if no_of_passengers<5:
#         return ticket_number_list
#     else:
#         return ticket_number_list[no_of_passengers-5:no_of_passengers:1]
# print(fun4("AI","Bangalore","London",7))

# x = 10
# def outer():
#     x = 20
#     def inner():
#         global x
#         x += 5
#     inner()
#     return x
# print(outer(), x)

# def func(a, b, c=3, *args, **kwargs):
#     return sum(args) + c + kwargs.get("d", 0)
# print(func(1, 2, 4, 5, 6, d=7))

# from functools import reduce
# nums = [2, 4, 6]
# result = reduce(lambda x, y: x + y * y, nums, 0)
# print(result)

def combine(*args, sep="-"):
    return sep.join(args)
print(combine("Python", "is", "awesome", sep=""))

# def test(x, y, z):
#     return x * y - z
# print(test(*[2, 3, 4]))