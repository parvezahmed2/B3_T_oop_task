class Animal:
    def __init__(self, name):
        self.name = name 



class animalCharacteristics(Animal):
    def __init__(self, name, height, weight, color):
        self.height = height 
        self.weight = weight 
        self.color = color 
        super().__init__(name)


    def display(self):
        print(self.name, self.height, self.weight, self.color)





a1 = animalCharacteristics('Tiger', '2f', '40kg', 'stripeless snow white ')

a1.display()


