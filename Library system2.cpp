#include "library.h"
#include <iostream>

int main() {
    Library library;

    library.addBook(Book("C++ Programming", "farida", "20230272"));
    library.addBook(Book("Introduction to OOP", "aisha", "20220298"));

    library.addPatron(Patron("Emmanuel", "2025-01-18"));
    library.addPatron(Patron("hassena", "2025-01-18"));

    library.listBooks();

    library.borrowBook("20230272", "emmanuel");

    library.returnBook("20230272");

    library.listPatrons();

    return 0;
}
