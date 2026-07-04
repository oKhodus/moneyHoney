#include <iostream>
#include <string>
#include "cmdlayer.h"
using namespace std;

namespace CMDLayer {
    void CmdLayer(const string& cmd, Wallet& wallet) {

        if (cmd == "/add") {
            double UserValue;
            cout << "Enter your new income: ";
            if (!(cin >> UserValue)) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Error: Please enter a valid number" << endl;
                return;
            }
            wallet.income(UserValue);
            wallet.showBalance();
        }
        else if (cmd == "/bal") {
            wallet.showBalance();
        }
        else if (cmd == "/exp") {
            double UserValue;
            cout << "Enter your new expense: ";
            if (!(cin >> UserValue)) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Error: Please enter a valid number" << endl;
                return;
            }
            wallet.expense(UserValue);
            wallet.showBalance();
        }
        else if (cmd == "/help") {
            cout << "Available commands:" << endl;
            cout << "  /add   - Add income to your balance" << endl;
            cout << "  /exp   - Record an expense" << endl;
            cout << "  /bal   - Display your current balance" << endl;
            cout << "  /help  - Show this help message" << endl;
            cout << "  /quit  - Exit the application" << endl;
        }
        else {
            cout << "Error: Incorrect command :( Use /help for available commands" << endl;
        }
    }

}