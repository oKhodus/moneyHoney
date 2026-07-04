#include <iostream>
#include <fstream>
#include "wallet.h"
using namespace std;

Wallet::Wallet() : balance(0) {}

void Wallet::income(double value) {
    if (value > 0) {
        balance += value;
        cout << "Congratulations! you have added income :)" << endl;
    } else {
        cout << "Error: Income value must be more than 0" << endl;
    }
}

void Wallet::expense(double value) {
    if (value <= 0) {
        cout << "Error: Expense value must be more than 0" << endl;
    } else if (value > balance) {
        cout << "Error: Insufficient balance. You only have " << balance << endl;
    } else {
        balance -= value;
        cout << "Congratulations! you have decreased your balance :)" << endl;
    }
}

void Wallet::showBalance() const {
    cout << "Your current balance is: " << balance << endl;
}

void Wallet::loadBalance() {
    ifstream file(BALANCE_FILE);
    if (file.is_open()) {
        file >> balance;
        file.close();
    }
}

void Wallet::saveBalance() const {
    ofstream file(BALANCE_FILE);
    if (file.is_open()) {
        file << balance;
        file.close();
    }
}
