#include"gbb.h"

string Human::turn() {
    string n;
    while (true) {
        cout << getName() << ": ";
        cin >> n;
        if (n == "scissor" || n == "rock" || n == "paper" || n == "exit")
            return n;
    }
}

string Com::turn() {
    int n = rand() % 3;
    return gbb[n];
}

string AbstractP::gbb[3] = {"rock", "scissor", "paper"};