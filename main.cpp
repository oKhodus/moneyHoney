#include <iostream>

double balance = 0;

void income(double value){
    std::cout << "Enter your new income: ";
    std::cin >> value;
    if (value > 0){
        balance += value;
        std::cout << "Congrats' you have added income :)" << std::endl;
    } else {
        std::cout << "Error: Income's value must to be more than 0" << std::endl;
    }
}

void expense(double value) {
    std::cout << "Enter your new expense: ";
    std::cin >> value;
    if (value > balance){
        std::cout << "Error: Expense's value must to be more than 0" << std::endl;
    } else {
        balance -= value;
        std::cout << "Congrats' you have decreased your balance :)" << std::endl;
    }
}

void showBalance() {
    std::cout << "Your current balance is: " << balance << std::endl;
}

int main(){
    double UserValue;
    income(UserValue);
    showBalance();
    expense(UserValue);
    showBalance();
    return 0;
}