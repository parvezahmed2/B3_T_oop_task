class value:

    def __init__(self, num1, num2):  # constructor 
        
        self.num1 = num1
        self.num2 = num2
    

    def sum(self):   # method 
        print(self.num1 + self.num2)
    
    def deduct(self):    # method
        print(self.num1 - self.num2)
    
    def mult(self):     # method 
        print(self.num1 * self.num2)
    
    def divi(self):     # method 
        print(self.num1 / self.num2)




values1 = value(20, 5)

values1.sum()
values1.deduct()
values1.mult()
values1.divi()