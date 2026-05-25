#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Account.h"

class Bank {

private:

    std::vector<Account*> accounts;

public:

    void createAccount();

    void displayAccounts();

    void depositMoney();

    void withdrawMoney();

    void saveToFile();

    void loadFromFile();

    ~Bank();
};

#endif
