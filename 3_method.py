class Phone:
    manufactured  = 'China'




    def send_sms(self, phone, sms):  # create a method    
        text =  f'sending to : {phone}{sms}'
        print(text)

    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand 
        self.price = price




my_phone = Phone('kala Chan', 'Oppo', 9800)  # create object 
 


hear_phone = Phone('She', 'iphone', 120000)  # create object 
 


 