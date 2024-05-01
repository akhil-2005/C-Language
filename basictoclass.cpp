#include<iostream>
using namespace std;
class Time
{
int hours;
int min;
public:

Time(int h,int m)
{
hours=h;
min=m;
}
Time()
{
hours=0;
min=0;
}
Time(int m)
{
	hours=m/60;
	min=m%60;
}

void display()
{
	cout<<hours<<":"<<min;
}

};
main()
{
Time t1(10,20);
Time t2;
int m=50;
t2=m;
t2.display();
}
