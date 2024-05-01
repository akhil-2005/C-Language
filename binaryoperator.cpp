//Create a class called time that has separate int member data for hours, minutes, and  seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. Another member function should display it, in 11:59:59 format and the overloaded + operator to add two times should add two objects of type time passed as arguments.
// A main() program should create two initialized time objects  and one that isn’t initialized. Then it should add the two objects together, leaving the
// result in the third time object Finally it should display the value of this third obj
#include <iostream>

class Time {
    int x, y, z;

public:
 Time(int hours, int min, int sec) 
 {
  x = hours;
  y = min;
  z = sec;
  }
Time() 
{
     x = 11;
     y = 59;
    z = 59;
    }

    Time operator+(Time tt2) 
	{
        Time temp;
        temp.x = x + tt2.x;
        temp.y = y + tt2.y;
        temp.z = z + tt2.z;
        return temp;
    }

    void show() 
	{
        std::cout << x << ":" << y << ":" << z << std::endl;
    }
};

int main() {
    Time t1(12, 2, 3);
    t1.show();
    Time t2(3, 3, 3);
    t2.show();
    Time t3;
    t3.show();
    Time t4;
    t4=t1+t3;
    t4.show();

    return 0;
}

