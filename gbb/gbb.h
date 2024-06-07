#ifndef GBB_H
#define GBB_H

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

/*추상 클래스*/
class AbstractP {
    string name;
    int winTime;

protected:
    static string gbb[3];

public:
    AbstractP(string name) {
        this->name = name;
        winTime = 0;
    }

    void setName() {
        cout << "이름을 입력하세요: ";
        string n;
        cin >> n;
        name = n;
    }

    void addWinTime() {
        winTime++;
    }

    void printWinTime() {
        cout << name << " " << winTime << "승" << endl;
    }

    virtual string turn() =0;

    string getName() {
        return name;
    }
};

/*Human 클래스*/
class Human : public AbstractP {
public:
    Human(string name = ""): AbstractP(name) {
    }

    string turn() override;
};

/*Computer 클래스*/
class Com : public AbstractP {
public:
    Com(string name = "컴퓨터"): AbstractP(name) {
    }

    string turn() override;
};

#endif //GBB_H
