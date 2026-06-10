#include <iostream>
#include <string>
#include "cmdlayer.cpp"
using namespace std;
using namespace CMDLayer;

int main(){
    cout << "Welcome to the moneyHoney app! ^_^ " << endl;
    string UserCmd;
    cout << "Enter your command: ";
    cin >> UserCmd;
    CmdLayer(UserCmd);

    return 0;
}
