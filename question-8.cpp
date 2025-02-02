#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool isCheckedOut;

public:
    Book(const std::string& t, const std::string& a, const std::string& i)
        : title(t), author(a), isbn(i), isCheckedOut(false) {}

    void checkOut() {
        if (!isCheckedOut) {
            isCheckedOut = true;
            std::cout << "Book \"" << title << "\" has been checked out.\n";
        } else {
            std::cout << "Book \"" << title << "\" is already checked out.\n";
        }
    }

    void returnBook() {
        if (isCheckedOut) {
            isCheckedOut = false;
            std::cout << "Book \"" << title << "\" has been returned.\n";
        } else {
            std::cout << "Book \"" << title << "\" was not checked out.\n";
        }
    }

    std::string getTitle() const { return title; }
    std::string getIsbn() const { return isbn; }
    bool getStatus() const { return isCheckedOut; }

    void displayDetails() const {
        std::cout << "Title: " << title << ", Author: " << author
                  << ", ISBN: " << isbn << ", "
                  << (isCheckedOut ? "Checked Out" : "Available") << "\n";
    }
};

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
        std::cout << "Book \"" << book.getTitle() << "\" added to the library.\n";
    }

    void removeBook(const std::string& isbn) {
        auto it = std::remove_if(books.begin(), books.end(),
            [&isbn](const Book& book) { return book.getIsbn() == isbn; });
        if (it != books.end()) {
            std::cout << "Book with ISBN " << isbn << " removed from the library.\n";
            books.erase(it, books.end());
        } else {
            std::cout << "Book with ISBN " << isbn << " not found in the library.\n";
        }
    }

    void findBookByTitle(const std::string& title) const {
        bool found = false
::contentReference[oaicite:0]{index=0}

}
