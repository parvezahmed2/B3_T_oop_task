

class Gadget:
    def __init__(self, brand, price, color, origin):
        self.brand = brand
        self.price = price
        self.color = color 
        self.origin = origin
    def run(self):
        return f'runn laptop : {self.brand}'




class Laptop:
    def __init__(self, memory, ssd) -> None: 
        self.memory = memory
        self.ssd = ssd
    
    def coding(self):
        return f'learning ipad  and practic my work  '


class Phone(Gadget):  #-------------------------------------------- inherit the gadget class 
    def __init__(self,brand, price, origin, color, dual_sim, ) -> None:

        self.dual_sim = dual_sim
        super().__init__(brand, price, color, origin)
    
    def run(self):
        return f'phone tipa tipi kore'
    
    def phone_call(self, number, text):
        return f'Sending SMS to: {number} with : {text}'
    
    def __repr__(self) -> str:
        return f'phone : {self.brand} {self.price}  {self.dual_sim}'

 
    




 
my_phone= Phone('iphone', 120000, 'silver','china',True)

print(my_phone)

