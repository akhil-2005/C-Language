#include<iostream>
using namespace std;
class demo
{
int a,b;
void getdata()
{
cout<<"enter the values of a and b: ";
cin>>a,b;
cout<<"the values of a and b are :";
}
void display()
{
cout<<"they are the numbers";
}
};
main()
{
demo d;
d.getdata();
d.display();
}

