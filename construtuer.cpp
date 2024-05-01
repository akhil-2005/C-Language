//create a class student having reg no and cgpa initalise the values using parametersised constructer and 
//create three objects by taking values from user third objesct should have the values of secind object//
#include<iostream>
using namespace std;
class student
{
 int reg_no,cgpa;
 public:
 student()
 {
 reg_no=12;
 cgpa=9;
 }
 student(int reg_no,int cgpa)
 {
 	cout<<"enter the values from user";
 }
 student(student &s)
 {
 cout<<"/n copy";
 s.reg_no;
 s.cgpa;
 }
};
main()
{
 student s1,s2,s3;
 s1.reg_no,cgpa;
 s2.student();
 int reg_no=15,cgpa=8;
 s3.student(s2);
 
}
