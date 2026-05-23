#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "Account.h"
class CurrentAccount : public Account {
punlic:
    CurrentAccount(int accNo;
                    string n,
                    double bal)
       :Account(accNo, n, bal){}
    void display() override {
      cout<< "\n----Current Account ---\n;
Account::display();
}
string getType() override{
  return "Current";
}};
s
