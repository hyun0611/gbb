#include"gbb.h"

int main() {
    srand((unsigned) time(0));

    Human h;
    h.setName();
    Com c;

    cout << "***** 컴퓨터와 사람의 가위바위보 게임 *****" << endl;
    while (true) {
        string hTurn = h.turn();

        if (hTurn == "exit") {
            cout << "게임 종료" << endl;
            break;
        }

        string cTurn = c.turn();
        cout << c.getName() << ": " << cTurn << endl;

        if (hTurn == cTurn)
            cout << "비겼습니다" << endl;
        else if ((hTurn == "scissor" && cTurn == "paper") ||
                 (hTurn == "paper" && cTurn == "rock") ||
                 (hTurn == "rock" && cTurn == "scissor")) {
            cout << h.getName() << " Win!" << endl;
            h.addWinTime();
            h.printWinTime();
            c.printWinTime();
        } else {
            cout << c.getName() << " Win!" << endl;
            c.addWinTime();
            h.printWinTime();
            c.printWinTime();
        }
        cout << endl;
    }
}
