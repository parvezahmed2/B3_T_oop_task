#include<bits/stdc++.h>
using namespace std;
 

class Home {
public:
    string address;

       
     
};

class School {
public:
    int id;
    int level;

    
     
};

class Sports {
public:
    string game;
     
     
};

class Student : public Home, public School, public Sports {  // multiple inheritance 
    public:
    Student(string address, int id, int level,string game){
        this->address = address;
        this->id = id;
        this->level = level;
        this->game = game;
    }
    void display() {
        cout<<address<<" "<<id<<" "<<level<<" "<<game<<endl;
    }
};

int main() {
    Student a1("kishoreganj", 25, 2, "a");
    a1.display();
    return 0;
}