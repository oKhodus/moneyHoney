#ifndef WALLET_H
#define WALLET_H

#include <string>

class Wallet {
private:
    double balance;
    const std::string BALANCE_FILE = "balance.txt";

public:
    Wallet();
    void income(double value);
    void expense(double value);
    void showBalance() const;
    void loadBalance();
    void saveBalance() const;
};

#endif
