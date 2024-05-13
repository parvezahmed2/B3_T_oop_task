#include<bits/stdc++.h>
using namespace std;
class Phone{
    private:
    std::string owner;
    std::string brand;
    int price;
     

public:
    // Constructor
    Phone(string owner, string brand, int price) {
        this->owner = owner;
        this->brand = brand;
        this->price = price;
    }

    
    void send_sms(string phone,string sms) {   // create method 
        string text = "sending to: " + phone + " " + sms;
        cout <<text <<endl;
    }
};


int main(){

     Phone my_phone("kala Chan", "Oppo", 9800);  // create object 
    Phone her_phone("She", "iphone", 120000);   // create object 

    
    return 0;
}