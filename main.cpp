#include <iostream>
#include <string>
using namespace std;

double balance = 0;

void income(double value){
    cout << "Enter your new income: ";
    cin >> value;
    
    (value > 0) ? balance += value : balance;
    
    string result = (value > 0) ? 
    "Congrats' you have added income :)" : 
    "Error: Income's value must to be more than 0";
    
    cout << result << endl;
}

void expense(double value) {
    cout << "Enter your new expense: ";
    cin >> value;
    (value > balance) ? balance : balance -= value;

    string result = (value > 0) ? 
    "Congrats' you have decreased your balance :)" : 
    "Error: Expense's value must to be more than 0";
    
    cout << result << endl;
}

void showBalance() {
    cout << "Your current balance is: " << balance << endl;
}

int main(){
    double UserValue;
    income(UserValue);
    showBalance();
    expense(UserValue);
    showBalance();
    return 0;
}