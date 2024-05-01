#include<iostream>
using namespace std;

class demo {
    int x, y;

public:
    demo(int a, int b) {
        x = a;
        y = b;
    }

    demo() {
        x = 0;
        y = 0;
    }

    bool operator==(demo dd2) {
        if (x == dd2.x && y == dd2.y)
            return true;
        else
            return false;
    }
};

int main() {
    demo d1(10, 20);
    demo d2(100, 200);
    demo d3(10, 20);

    if (d1 == d2) {
        cout << "equal";
    } else {
        cout << "not equal";
    }

    if (d1 == d3) {
        cout << "\nequal";
    } else {
        cout << "\nnot equal";
    }

    return 0;
}

