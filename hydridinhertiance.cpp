#include<iostream>
using namespace std;
class master
{
public:
char name;
int code;
void get_data_1()
{
	cout<<"\nenter the name";
	cin>>name;
	cout<<"\nenter the code";
	cin>>code;
}
void display_1()
{
cout<<"\n name of the person is "<<name;
cout<<"\n code of the person is "<<code;	
}

};
class account
{
public:
int ammount;
void get_data_2()
{
	cout<<"enter the ammount";
	cin>>ammount;
	}
void display_2()
{
	cout<<"\n the ammount is"<<ammount;
}
};
class admin
{
	public :
	int experience;
	void get_data_3()
{
	cout<<"enter the experience";
	cin>>;
void display_3()
{
	cout<<"\n the experience"<<experience;

	
};
class person:public master,public ammount,public admin
{
};
main()
{
class person p;
 person p;
    p.get_data_1();
    p.display_1();
    p.get_data_2();
    p.display_2();
    p.get_data_3();
    p.display_3();
	return 0;
}


