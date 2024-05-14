class Home:
    def __init__(self, address) -> None:
        self.address = address
    

class School:
    def __init__(self, id, level) -> None:
        self.id = id
        self.level = level


class Sports:
    def __init__(self, game) -> None:
        self.game = game


class Student(Home, School,  Sports):  # multiple inheritance 
    def __init__(self, address, id, level, game) -> None:
        School.__init__(self, id, level)
        Sports.__init__(self, game)
        Home.__init__(self, address)

    def display(self):
        print(f"{self.address}' ' {self.id}' '{self.level}' '{self.game} ")





a1 = Student('kishoreganj', 25, 2, 'a')

a1.display()
