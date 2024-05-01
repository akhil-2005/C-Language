#include <iostream>
#include <string>
#include <chrono> // For handling durations

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

