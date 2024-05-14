#include<bits/stdc++.h>
using namespace std;
 

class Vehicle {
public:
    string name;
    int price;    
};

class Bus : public Vehicle {
public:
    int seat;

};

class ACBus : public Bus { // multilevel inheritance 
public:
    ACBus(string name, int price, int seat, int temperature){
        this->name = name ;
        this->price = price;
        this->seat = seat ;
        this->temperature = temperature;
    }
    int temperature;
};

int main() {
    ACBus green_line("green", 50000000, 22, 16);

    cout<<green_line.name<<" "<<green_line.price<<" "<<green_line.seat<<" "<<green_line.temperature<<endl;
    return 0;
}