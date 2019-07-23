#include <iostream>
#include <map>
#include "Book.hpp"

using namespace std;

class LibraryCatalogue {
    map<string, Book> bookCollection;
    int currentDay;
    int lengthOfCheckoutPeriod = 7;
    double initialLateFee = 0.50;
    double feePerLateDay = 1.00;

    LibraryCatalogue(map<string, Book> collection) {
        this->bookCollection = collection;
    }

    LibraryCatalogue(map<string, Book> collection, double lengthOfCheckoutPeriod,
    double initialLateFee, double feePerLateDay) {
        this->bookCollection = collection;
        this->lengthOfCheckoutPeriod = lengthOfCheckoutPeriod;
        this->initialLateFee = initialLateFee;
        this->feePerLateDay = feePerLateDay;
    }

    // getters
    int getCurrentDay() {return this->currentDay;}
    map<string, Book> getBookCollection() {return this->bookCollection;}
    Book getBook(string bookTitle) { 
        map<string, Book> collection = getBookCollection();
        return collection[bookTitle];
        }
    int getLengthOfCheckoutPeriod() {return this->lengthOfCheckoutPeriod;}
    double getInitialLateFee() {return this->initialLateFee;}
    double getFeePerLateDay() {return this->feePerLateDay;}

    // setters
    void nextDay() { this->currentDay++; }
    void setDay(int day) { this->currentDay = day; }

    // Instance methods:
    void CheckOutBook(string title) {
        Book book = getBook(title);
        if (book.getIsCheckedOut()) {
            sorryBookAlreadyCheckedOut(book);
        }
        else {
            book.setIsCheckedOut(true, currentDay);
            cout << "You just checked out " + title + ". It is due on day "; 
            cout << (getCurrentDay() + getLengthOfCheckoutPeriod()) + "." << endl;
        }
    }

    void returnBook(string title) {
        Book book = getBook(title);
        int daysLate = currentDay - (book.getDayCheckedOut() + getLengthOfCheckoutPeriod());
        if (daysLate > 0) {
            cout << "You owe library $" << getInitialLateFee() + daysLate * getFeePerLateDay() <<
            " because your book is " << daysLate << "days overdue." << endl; 
        }
        else {
            cout << "Book returned. Thank you";
        }
        book.setIsCheckedOut(false, -1);
    }

    void sorryBookAlreadyCheckedOut(Book book) {
        cout << "Sorry, " << book.getTitle() << " is already checked out. " <<
        "It should be back on day " << book.getDayCheckedOut() + getLengthOfCheckoutPeriod() << "." << endl;
    }
};

int main() {
    
    cout << "Hello Easy C++ project!" << endl;
}