#include<bits/stdc++.h>
using namespace std;
class Gadget {
protected:
    string brand;
    double price;
    string color;
    string origin;

public:
   
    Gadget(string brand, double price, string color, string origin) 
        : brand(brand), price(price), color(color), origin(origin) {}

    
    string run() {
        return "running laptop: " + brand;
    }
};

 
class Laptop {
private:
    int memory;
    int ssd;

public:
    
    Laptop(int memory, int ssd) : memory(memory), ssd(ssd) {}

  
     string coding() {
        return "learning iPad and practicing my work";
    }
};

 
class Phone : public Gadget {    // inherit the gadget  class 
private:
    bool dual_sim;

public:
    
    Phone(string brand, double price, string origin, string color, bool dual_sim)
        : Gadget(brand, price, color, origin), dual_sim(dual_sim) {}

    
    string run() {
        return "phone tipa tipi kore";
    }

     
    string phone_call(string number, string text) {
        return "Sending SMS to: "+number+" with: " + text;
    }

     
    string repr() {
        return "phone:" +brand+" " +to_string(price) + " " + (dual_sim ? "Dual SIM" : "Single SIM");
    }
};

int main() {
    
    Phone my_phone("iPhone", 120000, "China", "Silver", true);

     
    cout<<my_phone.run() << endl;
}