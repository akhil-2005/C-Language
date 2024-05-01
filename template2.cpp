#include <iostream>

template<class T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    float d, e;

    std::cout<<"Enter two integers a, b: ";
    std::cin>>a>> b;

    std::cout << "Enter two floats d, e: ";
    std::cin >> d >> e;

    swap(a, b);
    std::cout << "After swapping: " << a << " " << b << std::endl;

    swap(d, e);
    std::cout << "After swapping: " << d << " " << e << std::endl;

    return 0;
}

