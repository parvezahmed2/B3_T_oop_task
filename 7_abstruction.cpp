#include<bits/stdc++.h>
using namespace std;
 class Shape {
public:
    double dim1;
    double dim2;
  
    
    virtual double area() const = 0;
};

class Triangle : public Shape {
public:
    Triangle(double dim1, double dim2){
        this->dim1 = dim1;
        this->dim2 = dim2;
    } 

    double area() const override {
        double area = 0.5 * dim1 * dim2;
        cout<<"Area of Triangle: " <<area<<endl;
        return area;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double dim1, double dim2){
        this->dim1 = dim1;
        this->dim2 = dim2;
    }  

    double area() const override {
        double area = dim1 * dim2;
        cout<<"Area of Rectangle: "<<area<<endl;
        return area;
    }
};

int main() {
    Triangle t1(20, 30);
    t1.area();

    Rectangle r1(20, 30);
    r1.area();

    return 0;
}
 


