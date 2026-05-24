#include <iostream>
#include "../include/Bank.h"

using namespace std;

int main() {

    Bank bank;

    int choice;

    do {

        cout << "\n===== BANK ACCOUNT MANAGER =====\n";

        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Accounts\n";
        cout << "5. Save Data\n";
        cout << "6. Load Data\n";
        cout << "7. Exit\n";

        while(true) {

            cout << "Enter Choice: ";

            if(cin >> choice) {

                break;
            }

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Invalid Choice!\n";
        }

        switch(choice) {

        case 1:
            bank.createAccount();
            break;

        case 2:
            bank.depositMoney();
            break;

        case 3:
            bank.withdrawMoney();
            break;

        case 4:
            bank.displayAccounts();
            break;

        case 5:
            bank.saveToFile();
            break;

        case 6:
            bank.loadFromFile();
            break;

        case 7:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}
