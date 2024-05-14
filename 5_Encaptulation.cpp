#include<bits/stdc++.h>
using namespace std;
class Bank {
 public:
    string holder_name;
    double balance;


    Bank(string holder_name, double initial_deposit){
        this->holder_name = holder_name;
        this->balance = initial_deposit;
        
    }

    void deposit(double amount) {
        balance += amount;
    }

    double get_balance() const {
        return balance;
    }

    string withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return "Withdrawn: "+to_string(amount);
        } else {
            return "Insufficient funds";
        }
    }

    string get_holder_name() const {
        return holder_name;
    }
};

int main() {
    Bank fahim("saidul islam", 10000);


    cout<<fahim.get_holder_name()<<endl;

    cout<<fahim.get_balance()<<endl;

    cout<<fahim.withdraw(5000)<<endl;

    
    cout<<fahim.get_balance()<<endl;
    return 0;
}
 


