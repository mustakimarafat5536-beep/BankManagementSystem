#include <iostream>
#include <fstream>

include 
include
include

using namespace std;

// creating account
void Bank: createAccount() {
int type;
int accNo;
string name;
double balance;

cout <<"\n1. Saving Account\n";
cout <<"2. Current Account\n";

while(true) {

        cout << "Choose Type: ";

        if(cin >> type && (type == 1 || type == 2)) {

            break;
        }

        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Invalid Type! Try Again.\n";
    }
while(true) {
cout <<"Enter Account Number: ";
if(cin>>accNo) {
break; }
cin.clear();
cin.ignore(1000, '\n');
cout << "Invalid Account Number!\n"; }

cin.ignore();

    cout << "Enter Full Name: ";
    getline(cin, name);

