//Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class publication that stores 
//the title (a string) and price (type float) of a publication. From this class derive classe: book, which adds a page count (type int), 
 //Tape inherited from book, which adds a playing time in minutes (type float).  
//Each of these three classes should have a getdata() function to get its data from the user at the keyboard, and a putdata()
// function to display its data. Write a main() program to test the book and tape classes by creating instances of them, asking the user to
// fill in data with getdata(), and then displaying the data with putdata()


#include<iostream>
#include<string>
using namespace std;
class publication
{
    protected:
	string the_title;
	float price;
	void display()
	{
		cout<<"enter the title"<<the_title;
		cin>>the_title;
		cout<<"enter the price"<<price;
		cin>>price;
	}
	
};
class book
{
int pageno;

}

