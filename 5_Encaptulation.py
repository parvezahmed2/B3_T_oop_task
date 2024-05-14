class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name
        self.__balance = initial_deposit
    
    def deposit(self, amount):
        self.__balance += amount
    
    def get_balance(self):
        return self.__balance
    
    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'Fokira taka nai'


fahim = Bank('saidul islam', 10000)

print(fahim.holder_name)

 
print(fahim._Bank__balance)  

