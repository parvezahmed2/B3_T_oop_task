#include<bits/stdc++.h>
using namespace std;
 
class Animal {
public:
    string name;
 
    
};

class AnimalCharacteristics : public Animal {
public:
    string height;
    string weight;
    string color;
 
    AnimalCharacteristics(string name, string height, string weight, string color)
    {   
        this->name=name;
        this->height=height;
        this->weight=weight;
        this->color=color;
    }
         

    void display() {
        cout<<name<<" "<<height<<" "<<weight<<" "<<color<<endl;
    }
};

int main() {
    AnimalCharacteristics a1("Tiger", "2f", "40kg", "stripeless snow white");
    a1.display();
    return 0;
}