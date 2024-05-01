#include<iostream>
using namespace std;

class person
{
	public:
	int code;
	string name;
	public:
		void get_data1()
		{
		   cout<<"\n Enter the name of the person:";
		   cin>>name;
		   cout<<"\n Enter the code of the person:";
		   cin>>code;  
		}
		void display_info1()
		{
			cout<<"\n Name of the person is:"<<name;
			cout<<"\n Code of the person is:"<<code;
		}
};
class admin : public person
{
	public:
	int exp;
	public:
		void get_data()
		{
		   cout<<"\n Enter the experiance of the person:";
		   cin>>exp;  
		}
		void display_info()
		{
			cout<<"\n Experiance of the person is:"<<exp;
		}		
};
class account : public person	
{
	public:
		int pay;
		public:
			void get_data()
		{
		   cout<<"\n Enter the payment to the person:";
		   cin>>pay;  
		}
		void display_info()
		{
			cout<<"\n Payment to the person is:"<<pay;
		
}};
class master :public admin , public account , public person
{
  	
};
int main()
{
	class master m;
	m.admin::get_data1();
	m.admin::display_info1();
	m.admin::get_data();
	m.admin::display_info();
	m.account::get_data();
	m.account::display_info();
}
}
