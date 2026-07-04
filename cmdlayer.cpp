#include <iostream>
#include <string>
#include "cmds.cpp"
using namespace std;
using namespace CMDS;


namespace CMDLayer {
    void CmdLayer(string cmd) {

        if (cmd == "/add")
        {
            double UserValue;
            cout << "Enter your new income: ";
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
            cout << "Enter your new expense: ";
            cin >> UserValue;
            expense(UserValue);
            showBalance();
        }
        else {
            cout << "Error: Incorrect command :(";
        }
    }

}