Write a program in which you declare variables that will hold an hourly wage and
number of hours worked. Prompt the user to enter values for hourly rate and hours
worked. Compute and display gross weekly pay, which is calculated as hours times rate
for the first 40 hours, plus hours times 1.5 times the rate for any hours over 40. Also display net pay,
 which is gross pay minus withholding; withholding is calculated as 28 percent
of gross pay if gross pay is over $1000, 21% of gross pay if gross pay is not over $1000 
but is over $600, and 10% of gross pay if gross pay is not over $600. Save the file as
OvertimeAndNet.cpp.
#include<conio.h>
#include<iostream>
using namespace std;
main()
{

float hourly_pay,weekly_pay,extra_pay,hour,withholding;
cout<<"enter the values";
cin>>hourly_pay>>hour;
weekly_pay=(40*hourly_pay)+((hour-40)*hourly_pay*1.5);
cout<<"\n weekly_pay="<<weekly_pay;
if(weekly_pay >1000)
{
withholding=weekly_pay-0.28;
cout<<"weekly_pay is high";
}
else if(weekly_pay>600 && weekly_pay<1000)
{

withholding=weekly_pay-0.21;
cout<<"weekly_pay is med";
}
else
{
withholding=weekly_pay-0.10;
cout<<"weekly_pay is low";
}

}
