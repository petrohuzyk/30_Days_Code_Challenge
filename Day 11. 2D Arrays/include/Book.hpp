#pragma once
#include <string>

using namespace std;

class Book {

public:
    // Properties and Global Variables
    string title;
    int pageCount;
    int ISBN;
    bool isCheckedOut;
    int dayCheckedOut = -1;

    // Constructor
    Book(string bookTitle, int bookPageCount, int bookISBN);

    // Getters
    string getTitle();
    int getPageCount();
    int getISBN();
    bool getIsCheckedOut();
    int getDayCheckedOut();

    // Setters
    void setTitle(string bookTitle);
    void setPageCount(int bookPageCount);
    void setISBN(int bookISBN);
    void setIsCheckedOut(bool boolIsCheckedOut, int currentDayCheckedOut);

private:
    void setDayCheckedOut(int day);
};