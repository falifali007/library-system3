#include "book.h"

Book::Book(const std::string& title, const std::string& author, const std::string& isbn)
    : title(title), author(author), isbn(isbn) {}


std::string Book::getTitle() const {
    return title;
}


void Book::setTitle(const std::string& newTitle) {
    title = newTitle;
}


std::string Book::getAuthor() const {
    return author;
}


void Book::setAuthor(const std::string& newAuthor) {
    author = newAuthor;
}


std::string Book::getISBN() const {
    return isbn;
}


void Book::setISBN(const std::string& newISBN) {
    isbn = newISBN;
}
