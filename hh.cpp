/*Define a class named Movie.
Include private fields for
the title, year, and name of the director.
Include three public non inline functions with
setTitle,setYear,SetDirector
display all the information .*/
#include<iostream>
using namespace std;
class Movie
{
	private:
	char title[30];
	int year;
	char director[30];
	public:
	void setTitle();//non inline member function
	void setYear();
	void setDirector();
	void display()//inline
	{
	cout<<"\nMovie details are:"<<endl;
	cout<<"\n"<<title;
   cout<<"\n"<<year;
    cout<<"\n"<<director;
			}
};//end of your class
void Movie::setTitle()
{
	cout<<"\nEnter title";
	cin>>title;
	}
	void Movie::setYear()
	{
		cout<<"\nEnter year of release";
		cin>>year;
	}
	void Movie::setDirector()
	{
		cout<<"\nEnter the director name";
		cin>>director;
	}
	main()
	{
		Movie m1;
		m1.setYear();
		m1.setTitle();
		m1.setDirector();
		m1.display();
	}
