class A:
    


    def __init__(self, brand, color, price):  # It's constructor 
        self.brand = brand 
        self.color = color
        self.price = price 

    
    def display(self):      # method    
        print(self.brand, self.color, self.price)

    

    def __del__(self):  # decstructor 
        print("It is destrucor")

    
        
    





obj1 = A('Oppo', 'black ', 1200)
obj2 = A('samsung', 'blue', 2400)


obj1.display()
obj2.display()




