#include "Book.hpp"
#include <string>

using namespace std;

// Constructor
Book::Book(string bookTitle, int bookPageCount, int bookISBN) {
    this->title = bookTitle;
    this->pageCount = bookPageCount;
    this->ISBN = bookISBN;
    isCheckedOut = false;
}

// Getters
string Book::getTitle() { return this->title; }
int Book::getPageCount() { return this->pageCount; }
int Book::getISBN() { return this->ISBN; }
bool Book::getIsCheckedOut() { return this->isCheckedOut; }
int Book::getDayCheckedOut() { return this->dayCheckedOut; }

// Setters
void Book::setTitle(string bookTitle) { this->title = bookTitle; }
void Book::setPageCount(int bookPageCount) { this->pageCount = bookPageCount; }
void Book::setISBN(int bookISBN) { this->ISBN = bookISBN; }
void Book::setIsCheckedOut(bool boolIsCheckedOut, int currentDayCheckedOut) { 
    this->isCheckedOut = boolIsCheckedOut;
    setDayCheckedOut(currentDayCheckedOut);
    }
void Book::setDayCheckedOut(int day) { this->dayCheckedOut = day; }