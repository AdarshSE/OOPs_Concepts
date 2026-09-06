#include <iostream>
using namespace std;

class Account {
    int accountNumber;
    string accountHolderName;
    double balance;
    int accountType; 
public:
    Account(int accNum, string accName, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accName;
        balance = initialBalance;
        accountType = 0; 
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Type: " << (accountType == 0 ? "Savings" : "Checking") << endl;
        cout << "Balance: " << balance << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Account acc(12345, "John Doe", 1000.0);
    acc.displayAccountInfo();
    acc.deposit(500.0);
    acc.displayAccountInfo();
    acc.withdraw(200.0);
    acc.displayAccountInfo();
    return 0;
}