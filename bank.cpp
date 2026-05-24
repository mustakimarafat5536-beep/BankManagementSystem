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

// acount check
while(true) {
cout <<"Enter Account Number: ";
if(cin>>accNo) {
break; }
cin.clear();
cin.ignore(1000, '\n');
cout << "Invalid Account Number!\n"; }

cin.ignore();
cout <<"Enter Full Name: ";
getline(cin,name);

//balance check
while(ture) {
cout << "Enter Balance: ";
if(cin >> banacne && balance >= 0) {
break; }

cin.clear();
        cin.ignore(1000, '\n');

        cout << "Invalid Balance!\n";
    }


    cout << "Enter Full Name: ";
    getline(cin, name);

if(type == 1) {

        accounts.push_back(
            new SavingsAccount(accNo,
                               name,
                               balance)
        );
    }
else {

        accounts.push_back(
            new CurrentAccount(accNo,
                               name,
                               balance)
        );
    }

    cout << "Account Created Successfully!\n";
}
// DISPLAY
void Bank::displayAccounts() {

    if(accounts.size() == 0) {

        cout << "\nNo Accounts Found!\n";
        return;
    }

    for(int i = 0; i < accounts.size(); i++) {

        accounts[i]->display();
    }
}
// DEPOSIT
void Bank::depositMoney() {

    int accNo;
    double amount;

    bool found = false;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for(int i = 0; i < accounts.size(); i++) {

        if(accounts[i]->getAccountNumber() == accNo) {

            while(true) {

                cout << "Enter Amount: ";

                if(cin >> amount && amount > 0) {

                    break;
                }

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Invalid Amount!\n";
            }

accounts[i]->deposit(amount);

            cout << "Deposit Successful!\n";

            found = true;

            break;
        }
    }

    if(found == false) {

        cout << "Account Not Found!\n";
    }
}

/ WITHDRAW
void Bank::withdrawMoney() {

    int accNo;
    double amount;

    bool found = false;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for(int i = 0; i < accounts.size(); i++) {

        if(accounts[i]->getAccountNumber() == accNo) {

            while(true) {

                cout << "Enter Amount: ";

                if(cin >> amount && amount > 0) {

                    break;
                }

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Invalid Amount!\n";
            }

            try {

                accounts[i]->withdraw(amount);

                cout << "Withdraw Successful!\n";
            }

            catch(const char* message) {

                cout << message << endl;
            }
found = true;

            break;
        }
    }

    if(found == false) {

        cout << "Account Not Found!\n";
    }
}

// SAVE FILE
void Bank::saveToFile() {

    ofstream file("data/accounts.txt");

    for(int i = 0; i < accounts.size(); i++) {

        file
        << accounts[i]->getAccountNumber()
        << endl;

        file
        << accounts[i]->getName()
        << endl;

        file
        << accounts[i]->getBalance()
        << endl;

        file
        << accounts[i]->getType()
        << endl;
    }

    file.close();

        // Load file
        void Bank:: loadFromFile() {
                ifstream file("data/accounts.txt);
                if (!file) {
                cout << "No saved Data Found\n";
                return; }

    cout << "Data Saved Successfully!\n";
}
