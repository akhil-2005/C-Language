#include<iostream>
using namespace std;

class figure {
    int side;
    int length;
    int breath;
    float radius;
    float pi;

public:
    figure(float pivalue=3.14) {
        side = 10;
        length = 15; 
        breath = 12;
        radius = 2.3;
        pi =pivalue;
    }

    void input_Values() {
        cout << "\nEnter the values for side, length, breath, radius, and pi: ";
        cin >> side >> length >> breath >> radius >> pi;
    }

    void area_of_circle() {
        float area = pi * radius * radius;
        cout << "\nThe area of circle is: " << area;
    }

    void area_of_square() {
        float area = side * side;
        cout << "\nThe area of square is: " << area;
    }

    void area_of_rectangle() {
        float area = length * breath;
        cout << "\nThe area of rectangle is: " << area;
    }
};

int main() {
    figure f;
    f.input_Values();
    f.area_of_circle();
    f.area_of_square();
    f.area_of_rectangle();
    return 0;
}

