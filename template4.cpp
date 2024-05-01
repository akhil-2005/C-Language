#include <iostream>
#include <string>

// Define a struct to hold information about each item type
template<typename ItemType>
struct ItemInfo;

// Define a function template for borrowing items
template<typename ItemType, typename... Args>
void borrowItem(const ItemType& item, const std::string& borrowerName, Args&&... args) {
    std::cout << "Borrower: " << borrowerName << std::endl;
    std::cout << "Item: " << ItemInfo<ItemType>::typeName << std::endl;
    std::cout << "Checkout Duration: " << ItemInfo<ItemType>::checkoutDuration << " days" << std::endl;

    // Process any additional parameters specific to the item
    ((std::cout << args << std::endl), ...);
}

// Example for a Book
template<>
struct ItemInfo<std::string> {
    static const char* typeName;
    static const int checkoutDuration;
};
const char* ItemInfo<std::string>::typeName = "Book";
const int ItemInfo<std::string>::checkoutDuration = 14;

// Example

