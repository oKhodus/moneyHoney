#include <iostream>
#include <string>
using namespace std;

double balance = 0;

void income(double value){
    
    (value > 0) ? balance += value : balance;
    
    string result = (value > 0) ? 
    "Congrats' you have added income :)" : 
    "Error: Income's value must to be more than 0";
    
    cout << result << endl;
}

void expense(double value) {
    (value > balance) ? balance : balance -= value;

    string result = (value > 0) ? 
    "Congrats' you have decreased your balance :)" : 
    "Error: Expense's value must to be more than 0";
    
    cout << result << endl;
}

void showBalance() {
    cout << "Your current balance is: " << balance << endl;
}

void CmdLayer(string cmd) {

    if (cmd == "/add")
    {
        double UserValue;
        cout << "Enter your new expense: ";
        cin >> UserValue;
        income(UserValue);
        showBalance();
    }
    else if (cmd == "/bal")
    {
        showBalance();
    }
    else if (cmd == "/exp")
    {
        double UserValue;
        cout << "Enter your new income: ";
        cin >> UserValue;
        expense(UserValue);
        showBalance();
    }
    else {
        cout << "Error: Incorrect command :(";
    }
}

int main(){
    cout << "Welcome to the moneyHoney app! ^_^ " << endl;
    string UserCmd;
    cout << "Enter your command: ";
    cin >> UserCmd;
    CmdLayer(UserCmd);

    return 0;
}
