#include "library.h"
#include <iostream>

int main() {
    Library library;

    library.addBook(Book("C++ Programming", "jane salim", "12345678"));
    library.addBook(Book("Introduction to OOP", "Jane Doe", "87654321"));

    library.addPatron(Patron("Lecturer Name", "2025-01-17"));
    library.addPatron(Patron("Student A", "2025-01-18"));

    library.listBooks();

    library.borrowBook("12345678", "Student A");

    library.returnBook("12345678");

    library.listPatrons();

    return 0;
}
