def add():
    print("this is add ()")
def sub():
    print("this is sub ()")
# Random module
# use of random() keyword return a random floating no. between 0 and 1
import random
print(random.random())
# use of randint() keyword return a integer no. between specified range
import random
print(random.randint(3,9)) # exclude 9
# use of uniform() keyword return a random floating no. between two specified no.(both include)
import random
print(random.uniform(20,60))
# use of randrange() keyword return a randomly selected element from a specified range.
import random
print(random.randrange(3,9)) # 9 is not include but 3 is include
# use math.ceil() method round a no. UP to the nearest integer if necessary and return the result
import math 
print(math.ceil(1.4))
print(math.ceil(-5.3))
# use math.floor() method round a no. DOWN to the nearest integer if necessary and return the result
import math
print(math.floor(1.4))
print(math.floor(-5.3))
# use math.fabs() method return the absolute value of a number as a float, Absolute denote  a non negative no. this remove the negative sign of no. if it has any
import math
print(math.fabs(-5.3))
print(math.fabs(-7))
# use math.sqrt() method return the square root of a no. NOTE: The no. must be greater than or equal to 0
import math
print(math.sqrt(16))
print(math.sqrt(2))
# use math.exp() method return E raised to a power of x
# 'E' is the base of natual numbernof logarithm (approx 2.71) and 'x' is the exponent
import math
print(math.exp(65))
print(math.exp(-6.89))
# use divmod() function return a tuple containing the quotient and the remainder argument1(dividend) is divided by argument2 (divisor)
import math
x=divmod(5,2) # 5 divided by 2 in output containing (quotient and remainder)
print(x)
# use math.factorial()
# return the factorial of a number
