
#include<iostream> 
using namespace std; 
class bank_account 
{ 
 char name_of_the_depositor[30];
 int  account_number;
 char type_of_account;
 int bank_balance;
 public:
 void intial_value(int)
 {
 cout<<"\nenter the intial_value";
 cin>>intial_value;
}
 int  amount_deposit(int)
 {
 
 balance+=deposit;
 cout<<" the amount_deposit";
 cin>>amount_deposit;
}
 int  withdraw(int)
 {
 if(balance<x)
 {
 balance=balance-withdraw
 cout<<"\n newbalance after withdrawal"<<withdrawal;
 cin<<withdrawal
 else
 {
 	cout<<"nothing withdraw"
 }
 
 }
 }
 void display()
 {
 	cout<<name<<"==="<<balance;
 }
};
main()
{
	bank_account c;
	c.amount_deposit();
	c.amount_deposit();
	int b=c.withdraw();
	c.display();
}

