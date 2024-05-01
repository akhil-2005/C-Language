#include <iostream>
#include <string>

class publication {
public:
    std::string title; // Changed to string type
    float price;       // Changed from prize to price
};

class book : public publication {
public:
    int pagecount;
};

class tape : public publication {
public:
    float playtime;
};

void getdata(publication &pub) { // Pass by reference to modify the original object
    std::cout << "Enter the title: ";
    std::cin >> pub.title;
    std::cout << "Enter the price: ";
    std::cin >> pub.price;
}

void putdata(const publication &pub) { // Pass by reference to avoid copying
    std::cout << "Title: " << pub.title << std::endl;
    std::cout << "Price: " << pub.price << std::endl;
}

int main() {
    book myBook;
    tape myTape;

    std::cout << "For the book:\n";
    getdata(myBook);
    std::cout << "For the tape:\n";
    getdata(myTape);

    std::cout << "\nBook details:\n";
    putdata(myBook);
    std::cout << "\nTape details:\n";
    putdata(myTape);

    return 0;
}

