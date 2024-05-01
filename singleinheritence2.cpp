#include<iostream>
using namespace std;

class account
{
protected: // Changed 'char name;' to 'string name;' to store names with more than one character.
    string name;
    int acc_num;
    float balance_money;
    int acc_balance;
    int deposit;
    int total_amount; // Corrected variable name 'total_ammount' to 'total_amount'
public:
    account()
    {
        cout << "Enter deposit amount: ";
        cin >> deposit;
        balance_money = acc_balance + deposit;
    }
    void display()
    {
        cout << "Balance money: " << balance_money << endl;
    }
};

class saving : public account
{
private:
    float compute_interest; // Changed 'compute_intrest' to 'compute_interest'
    float deposit_interest; // Added missing variable for deposit interest.
public:
    saving()
    {
        cout << "Enter deposit amount: ";
        cin >> deposit;
        balance_money = acc_balance + deposit; // Removed from here, already in base class constructor.
        cout << "Enter compute interest: ";
        cin >> compute_interest;
        total_amount = balance_money + compute_interest + deposit_interest; // Added deposit_interest to total_amount calculation.
        cout << "Total amount: " << total_amount << endl;
    }
};

int main()
{
    saving s;
    s.display();
    return 0;
}

