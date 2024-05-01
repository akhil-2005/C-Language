#include<iostream>
using namespace std;
class person
{
	public:
string name;
int code;
void get_data_1()
{
	cout<<"enter the name";
	cin>>name;
	cout<<"enter the code";
	cin>>code;
}
void display_1()
{
cout<<"the name"<<name;
cout<<"the code"<<code;
}
};
class account:public person
{
	public:
int ammount;
void get_data;
{
	cout<<"enter the ammount";
	cin>>ammount
}
void display
{
	cout<<"the ammount is"<<ammount;
	
}
};
class admin:public person
{
	public:
int experience;
void get_data;
{
	cout<<"enter the experience";
	cin>>experience
}
void display
{
cout<<"the ammount is"<<ammount;	
}
};
main()
{
master m;
m.get_data_1();
m.display_1();
m.
}


