class Employee:
    def __init__(self):
        self.name="alice"
        self.__salary=50000
    
emp= Employee()
print(emp.name)
print(emp._Employee__salary)

# ---------------------------------------------------------------------------------------
class Number:
    even=0
    def check(self,num):
        if num%2==0:
            self.even=1
    def Even_Odd(self,num):
        self.check(num)
        if self.even==1:
            print(num,"is even")
        else:
            print(num,"is odd")
n=Number()
n.Even_Odd(21)

# ---------------------------------------------------------------------------------------------
class Demo:
    def __init__(self,name):
        self.name=name
        print(f"{self.name} is being destroyed.")
    
obj=Demo("TestObject")
del obj    

# ---------------------------------------------------