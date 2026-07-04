#include <iostream>
#include <string>
#include "cmdlayer.h"
#include "wallet.h"
using namespace std;
using namespace CMDLayer;

int main(){
    cout << "Welcome to the moneyHoney app! ^_^ " << endl;
    cout << "Commands: /add, /exp, /bal, /help, /quit" << endl;

    Wallet wallet;
    wallet.loadBalance();

    string UserCmd;
    while (true) {
        cout << "\nEnter your command: ";
        cin >> UserCmd;

        if (UserCmd == "/quit" || UserCmd == "/exit") {
            wallet.saveBalance();
            cout << "Balance saved. Goodbye!" << endl;
            break;
        }

        CmdLayer(UserCmd, wallet);
    }

    return 0;
}
