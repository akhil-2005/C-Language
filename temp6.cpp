/*Imagine you're creating a virtual library system for a bustling community center.
 You want to implement a function template to handle the borrowing process for various types
  of items available in the library, such as books, DVDs, and board games. Each item has its own 
  checkout duration and special requirements
 for borrowing.Your task is to design a function template called borrowItem that can
  handle the borrowing process for any type of item in the library. The function should take in 
  the item to be borrowed, the borrower's name, and any additional parameters specific to the item
   being borrowed. Additionally, ensure that the function template can handle different types of items
  seamlessly, allowing for flexibility and efficiency in the borrowing process.*/
  #include <iostream>
#include <string>
#include <chrono>
 // For handling durations
using namspace std;
// Define a class representing an item in the library
template<typename ItemType>
class LibraryItem {
public:
    // Constructor
    LibraryItem(const ItemType& item, const std::chrono::duration<int> duration)
        : item(item), duration(duration) {}

    // Function to borrow the item
    void borrow(const std::string& borrowerName) {
        // Your borrowing logic here...
        std::cout << borrowerName << " borrowed " << item << std::endl;
        std::cout << "Due in " << duration.count() << " days." << std::endl;
    }

private:
    ItemType item;
    std::chrono::duration<int> duration;
};

// Function template to handle the borrowing process for any type of item
template<typename ItemType, typename... Args>
void borrowItem(const ItemType& item, const std::string& borrowerName, Args&&... args) {
    LibraryItem<ItemType> libraryItem(item, std::forward<Args>(args)...);
    libraryItem.borrow(borrowerName);
}

// Example usage
int main() {
    // Borrowing a book
    borrowItem<std::string>("Book: Introduction to C++", "Alice", std::chrono::days(14));

    // Borrowing a DVD
    borrowItem<std::string>("DVD: Avengers", "Bob", std::chrono::days(7));

    // Borrowing a board game
    borrowItem<std::string>("Board Game: Settlers of Catan", "Charlie", std::chrono::hours(48));

    return 0;
}

  
