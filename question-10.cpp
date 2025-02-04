#include <iostream>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    bool isAvailable;

public:
    // Constructor to initialize book details
    Book(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
        isAvailable = true;  // Initially, the book is available
    }

    // Function to borrow a book
    void borrowBook() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book \"" << title << "\" borrowed successfully.\n";
        } else {
            cout << "Sorry, \"" << title << "\" is already borrowed.\n";
        }
    }

    // Function to return a book
    void returnBook() {
        if (!isAvailable) {
            isAvailable = true;
            cout << "Book \"" << title << "\" returned successfully.\n";
        } else {
            cout << "Book \"" << title << "\" is already in the library.\n";
        }
    }

    // Function to display book details
    void displayBook() {
        cout << "Book ID: " << bookID << "\nTitle: " << title << "\nAuthor: " << author
             << "\nStatus: " << (isAvailable ? "Available" : "Borrowed") << "\n\n";
    }
};

// Main function
int main() {
    // Creating book objects
    Book book1(101, "The Great Gatsby", "F. Scott Fitzgerald");
    Book book2(102, "1984", "George Orwell");

    // Displaying initial book details
    cout << "Initial Library Status:\n";
    book1.displayBook();
    book2.displayBook();

    // Borrowing a book
    book1.borrowBook();
    
    // Trying to borrow the same book again
    book1.borrowBook();

    // Returning the book
    book1.returnBook();

    // Displaying final status
    cout << "\nFinal Library Status:\n";
    book1.displayBook();
    book2.displayBook();

    return 0;
}
