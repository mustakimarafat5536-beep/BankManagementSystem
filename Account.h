#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account {

protected:
    int accountNumber;
    string name;
    double balance;

public:

    Account(int accNo, string n, double bal) {

        accountNumber = accNo;
        name = n;
        balance = bal;
    }

    virtual void deposit(double amount) {

        balance += amount;
    }

    virtual void withdraw(double amount) {

        if(amount > balance) {

            throw "Insufficient Balance!";
        }

        balance -= amount;
    }

    virtual void display() {

        cout << "Account Number: "
             << accountNumber << endl;

        cout << "Name: "
             << name << endl;

        cout << "Balance: "
             << balance << endl;
    }

    int getAccountNumber() {

        return accountNumber;
    }

    string getName() {

        return name;
    }

    double getBalance() {

        return balance;
    }

    virtual string getType() {

        return "Account";
    }

    virtual ~Account() {}
};

#endif