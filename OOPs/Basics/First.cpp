#include<iostream>
using namespace std;

class User {
// private:    // By default (private)
    int id;
    string username;
    string email;
    string password;

public:
    void scanUserDetails(int id, string username, string email, string password) {
        this->id = id;
        this->username = username;
        this->email = email;
        this->password = password;
    }

    void showUserDetails() {
        cout << "(id='" << id << "', username='" << username << "', email='" << email << "', password='" << password << "')" << endl;

        // cout << "Id: " << id << endl;
        // cout << "UserName: " << username << endl;
        // cout << "Email: " << email << endl;
        // cout << "Password: " << password << endl;
    }
};

int main() {
    User user0;
    int id;
    string uname, email, pass;

    cout << "Enter id: ";
    cin >> id;
    cout << "Enter uname: ";
    cin >> uname;
    cout << "Enter email: ";
    cin >> email;
    cout << "Enter pass: ";
    cin >> pass;

    // user0.scanUserDetails(23, "user0", "user0@gmail.com", "user0.pass");
    user0.scanUserDetails(id, uname, email, pass);
    user0.showUserDetails();
    
    return 0;
}


/*
Tasks:

1. Create a class named "Employee" with data members for employee ID, name, and salary. Include a method to input employee details and another method to display those details.

2. Implement a class called "Rectangle" with attributes length and width. Write methods to input dimensions, calculate area, and display the rectangle's details.

3. Develop a class named "BankAccount" with properties for account number, account holder's name, and balance. Include methods to deposit, withdraw, and display account details.

4. Design a class called "Book" with attributes for book title, author, and price. Write functions to input book details, update price, and display book information.

5. Create a class named "Car" with data members for make, model, and year. Implement methods to input car details, update year, and display the car's specifications.

*/