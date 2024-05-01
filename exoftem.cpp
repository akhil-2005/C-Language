#include<iostream>
using namespace std;

template <class t>
class BugWarrior {
public:
    virtual void attack() = 0;
    virtual void defend() = 0;
};

class knightwarrior : public BugWarrior<int> {
public:
    void attack() override {
        int enemiesAttack;
        cout << "attacking of enemies: ";
        cin >> enemiesAttack;
    }

    void defend() override {
        int enemiesDefend;
        cout << "defending from enemies: ";
        cin >> enemiesDefend;
    }
};

class wizardWarrior : public BugWarrior<int> {
public:
    void attack() override {
        int enemiesAttack;
        cout << "attacking of enemies: ";
        cin >> enemiesAttack;
       
    }

    void defend() override {
        int enemiesDefend;
        cout << "defending from enemies: ";
        cin >> enemiesDefend;
    }
};

int main() {
    knightwarrior knight;
    wizardWarrior wizard;
    knight.attack();
    cout << "the attack of enemies is: " << attack << endl;
    knight.defend();
    cout << "the defending from enemies is: " << enemiesDefend << endl;
    wizard.attack();
     cout << "the attack of enemies is: " << enemiesAttack << endl;
    wizard.defend();
     cout << "the defending from enemies is: " << enemiesDefend << endl;

    return 0;
}

