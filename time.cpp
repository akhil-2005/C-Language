#include<iostream>
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
    Time t;
    t.display();
    Time t2(2,5,30);
    t2.display();
    return 0;
}

