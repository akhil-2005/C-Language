//Assume that a bank maintains savings accounts for customers. The savings account provides an interest and withdrawal facility. 
//Create a class account that stores the customer name, and account number and from this derive a savings account to make it more
// specific to its requirement. 
//Include necessary member functions to achieve the following task 
//a)accept the deposit from the customer and update the balance 
//b)display the balance 
//c)compute interest 
//d)deposit interest
#include<iostream>
using namespace std;
class account
{
	char name;
	int acc_num;
	float balance_money;
	int acc_balance;
	int deposit;
	int total_amount;
	public:
	account()
	{
		cout<<"the money deposit"<<deposit;
		cin>>deposit;
		balance_money=acc_balance+deposit;
	}
	void display()
	{
	cout<<"the balance_money"<<balance_money;
	}
	
	
};
class saving:public account
{
	private:
	float compute_intrest;
	float deposit_intrest;

	char name;
	int acc_num;
	float balance_money;
	int acc_balance;
	int deposit;
	int total_ammount;
	float compute_intrest;
	float deposit_intrest;
   saving()
	{
		cout<<"the money deposit"<<deposit;
		cin>>deposit;
		balance_money=acc_balance+deposit;
	}
	
	void display()
	{
	cout<<"the balance_money"<<balance_money;
	}
	saving()
	{
		cout<<"the compute_intrest"<<compute_intrest;
		cin>>compute_intrest;
		total_ammount=(balance_money+compute_intrest+deposit_intrest);
		cout<<total_ammount;
	}
};
