//Create a structure called employee that contains two members: an employee number
//(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
//in this data for three employees, store it in three variables of type struct employee, and
//then display the information for each employee//.
#include<iostream>
using namespace std;
struct employee 
{
	string empolyee ;
	int employee_number;
	float employee_compansation;
	
}e1,e2,e3;
main()
{
  
  cout<<"\nEnter the employee_number and  employee_compansation";
  cin>>e1.employee_number>>e1.employee_compansation;
  cout<<"\nEnter the employee_number and  employee_compansation";
  cin>>e2.employee_number>>e2.employee_compansation;
  cout<<"\nEnter the employee_number and  employee_compansation";
  cin>>e3.employee_number>>e3.employee_compansation;
  cout<<"\n Employee_number--"<<e1.employee_number<<"employee_compansation"<<e1.employee_compansation;
  cout<<"\n Employee_number--"<<e2.employee_number<<"employee_compansation"<<e2.employee_compansation;
  cout<<"\n Employee_number--"<<e3.employee_number<<"employee_compansation"<<e3.employee_compansation;
  
}
  
