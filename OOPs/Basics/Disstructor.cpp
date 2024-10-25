#include<iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
        cout << "Constructor called..." << endl;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    ~Book() {   // Tilde (~)
        cout << "Destructor called..." << endl;
        cout << "The book '" << title << "' by " << author << " published in " << year  << " has been destroyed." << endl;
    }
};


int main() {
    Book book1("The Catcher in the Rye", "Krish Patel", 1951);
    Book book2("A Wise Man", "Yug Patel", 2020);

    cout << "Book details before destruction: " << endl;
    book1.display();
    book2.display();

    return 0;
}


/*
Tasks: 

1. Create a class representing a car. Implement a destructor that prints a message indicating the destruction of a car object.

2. Design a class to manage student records. Implement a destructor that displays a message when a student record object is destroyed.

3. Develop a simple calculator class. Add a destructor that prints a farewell message when a calculator object is destroyed.

4. Build a class representing a shopping cart. Include a destructor that displays a message when a shopping cart object is destroyed.

5. Design a class representing a computer. Implement a destructor that prints a message when a computer object is destroyed.

*/