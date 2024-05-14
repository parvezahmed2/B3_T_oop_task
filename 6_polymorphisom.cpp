#include<bits/stdc++.h>
using namespace std;
 
class Animal {
protected:
    std::string name;
public:
    Animal(const std::string& name) : name(name) {}

    virtual void make_sound() const {
        std::cout << "Animal making some sound" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(const std::string& name) : Animal(name) {}

    void make_sound() const override {
        std::cout << "Hello, I am meow" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {}

    void make_sound() const override {
        std::cout << "Hello, I am dog" << std::endl;
    }
};

class Goat : public Animal {
public:
    Goat(const std::string& name) : Animal(name) {}

    void make_sound() const override {
        std::cout << "It is goat" << std::endl;
    }
};

int main() {
    Cat don("Real Don");
    don.make_sound();

    Dog shepard("Local Shephard");
    shepard.make_sound();

    Goat mess("L M");
    mess.make_sound();

    Goat less("gora gori");

    std::vector<Animal*> animals = {&don, &shepard, &mess, &less};

    for (const auto& animal : animals) {
        animal->make_sound();
    }

    return 0;
}