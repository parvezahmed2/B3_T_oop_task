from abc import ABC, abstractclassmethod

class Shape(ABC):  # absract class 
    def __init__(self, dim1, dim2) -> None:
        self.diml = dim1
        self.dim2 = dim2
    @abstractclassmethod
    def area(self):
        pass 



class Triangle(Shape):
    def area(self):
        area = 0.5 * self.diml * self.dim2

        print("Area of Triangle : ", area)


class Rectangle(Shape):
    def area(self):
        area = self.diml * self.dim2
        print("Area of Rectangle : ", area)


t1 = Triangle(20, 30)
t1.area()

r1 = Rectangle(20, 30)
r1.area()

