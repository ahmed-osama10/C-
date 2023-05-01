#include <iostream>

using namespace std;


struct Book {
    string title;
    string author;
    double price;
    int numberOfPages;
};

int main()
{

    struct Book book1;
    struct Book book2;


    book1.title = "Data Structure and Algorithms";
    book1.author = "Ahmed Osama";
    book1.price = 99;
    book1.numberOfPages = 567;

    book2.title = "Data Science";
    book2.author = "Ali Ahmed";
    book2.price = 22;
    book2.numberOfPages = 470;

    cout << "Book 1 ----------- \n";
    cout << "Title: " << book1.title << "\n";
    cout << "Author: " << book1.author << "\n";
    cout << "Price: " << book1.price << "$\n";
    cout << "Number of pages: " << book1.numberOfPages << "\n\n";

    cout << "Book 2 ----------- \n";
    cout << "Title: " << book2.title << "\n";
    cout << "Author: " << book2.author << "\n";
    cout << "Price: " << book2.price << "$\n";
    cout << "Number of pages: " << book2.numberOfPages;

    return 0;
}
