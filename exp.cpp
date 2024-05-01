//Create a class called time that has separate int member data for hours, minutes, and  seconds. 
//One constructor should initialize this data to 0, and another should initialize it to fixed values.
// Another member function should display it, in 11:59:59 format and the overloaded + operator to add two times should add 
//two objects of type time passed as arguments.
 //A main() program should create two initialized time objects  and one that isn’t initialized. 
 //Then it should add the two objects together, leaving the
 //result in the third time object Finally it should display the value of this third object
 #include<iostream>
 using namespace std;
 class Time
 {
 	int hours;
 	int min;
 	int sec;
 	public:
 		Time(int h,int m,int s)
 		{
 			hours=h;
 			min=m;
 			sec=s;
 			
		 }
		 Time()
 		{
 			hours=0;
 			min=0;
 			sec=0;
 		}
 		void display()
		 {
		 	cout<<"hours: "<<hours<<"min: "<<min<<"sec: "<<sec;
 			
		 }
 };
 int main()
 {
 	Time t(15,15,30);
 	t.display#include<iostream>
using namespace std;

class Time {
    int hours;
    int min;
    int sec;
public:
    Time(int h, int m, int s) {
        hours = h;
        min = m;
        sec = s;
    }
    Time() {
        hours = 0;
        min = 0;
        sec = 0;
    }
    void display() {
        cout << "hours: " << hours << " min: " << min << " sec: " << sec << endl;
    }
};

int main() {
    Time t(15, 15, 30);
    t.display();
    Time t2;
    t2.display();
    return 0;
}


 	
 
