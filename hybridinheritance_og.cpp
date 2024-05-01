#include<iostream>
using namespace std;

class master 
{
public:
    string name;
    int code;
    void get_data_1()
	 {
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "\nEnter the code: ";
        cin >> code;
    }
    void display_1()
	 {
        cout << "\nName of the person is: " << name;
        cout << "\nCode of the person is:" << code;
    }
};

class account :public master
{
public:
    int amount;
    void get_data_2() {
        cout << "\nEnter the amount: ";
        cin >> amount;
    }
    void display_2() {
        cout << "\nThe amount is:" << amount;
    }
};

class admin :public master
{
public:
    int experience;
    void get_data_3()
	 {
        cout << "\nEnter the experience: ";
        cin >> experience;
    }
    void display_3()
	 {
        cout << "\nThe experience is:" << experience;
    }
};

class person: public master, public account, public admin
{
};

int main()
 {
    person p;
    p.admin::get_data_1();
    p.account::get_data_2();
    p.admin::get_data_3();
    p.admin::display_1();
    p.account::display_2();
    p.admin::display_3();
    return 0;
}

