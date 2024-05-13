#include<bits/stdc++.h>
using namespace std;

class Bank {
private:
    string holder_name;
    double balance;

public:
 
    Bank(string holder_name, double initial_deposit) : holder_name(holder_name), balance(initial_deposit) {}

  
    void deposit(double amount) {
        balance += amount;
    }

     
    double get_balance() {
        return balance;
    }

   
    string withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return "Withdrawn amount: " + to_string(amount);
        } else {
            return "Fokira taka nai";
        }
    }
};

int main() {
    
    Bank rafsun("Chooto bro", 10000);

    
    cout<<rafsun.get_balance()<<endl;

    return 0;
}
