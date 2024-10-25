#include<iostream>
using namespace std;

class Product {
    int id;
    string name;
    double price;

public:
    //Constructor -> used to initialize the values (defaults)
    Product() { // Default Constructor
        this->id = 0;
        this->name = "";
        this->price = 0;
        cout << "Default constructor called!" << endl;
    }

    Product(int id, string name, double price) {    // Parameterized Constructor
        this->id = id;
        this->name = name;
        this->price = price;
        cout << "Parameterized constructor called!" << endl;
    }

    Product(Product& product) { // Copy Constructor
        this->id = product.id;
        this->name = product.name;
        this->price = product.price;
        cout << "Copy constructor called!" << endl;
    }

    void getProduct() {
        cout << "(id='" << id << "', name='" << name << "', price='" << price << "')" << endl;
    }
};

int main() {
    int id;
    string name;
    double price;

    cout << "\nEnter id: ";
    cin >> id;
    
    cout << "\nEnter name: ";
    cin.ignore();
    getline(cin, name);
    
    cout << "\nEnter price: ";
    cin >> price;

    Product p1(id, name, price), p2(p1);

    p1.getProduct();
    p2.getProduct();

    return 0;
}

/*
Constructors in CPP:
They are special methods that invokes/called automatically when the object is created.

The main purpose of using the constructor is to initialize the class members.

three types of constructors:
    1 -> default constructor
    2 -> parameterized constructor
    3 -> copy constructor
    
Tasks: 
// default / parameterized constructor

1. Create a class representing a car with member variables for make, model, and year. Write a default constructor that initializes these variables to default values.
   
2. Implement a class for a geometric shape with member variables representing its dimensions. Write a parameterized constructor that initializes these dimensions when an object is created.

3. Design a class to model a bank account with member variables for account number, balance, and account holder name. Write a constructor that takes initial values for these variables.

4. Develop a class for a book with member variables for title, author, and publication year. Write a constructor that initializes these variables when an object of the class is instantiated.

5. Create a class representing a student with member variables for name, roll number, and age. Write a constructor that accepts these details as parameters during object creation.

6. Design a class to represent a point in a 2D coordinate system. Write a constructor that initializes the x and y coordinates to specific values.

7. Implement a class for a bank transaction with member variables for transaction ID, amount, and transaction type. Write a constructor that initializes these variables.

8. Develop a class to model a circle with member variables for radius and center coordinates. Write a constructor that initializes these variables when an object is created.

9. Design a class representing a calendar event with member variables for event name, date, and time. Write a constructor that takes these details as parameters.

10. Create a class to represent a computer with member variables for brand, model, and price. Write a constructor that initializes these variables when an object of the class is instantiated.


*/

/* copy constructor
Tasks:

1. Create a class representing a musical playlist with a dynamic array of song objects. Implement a copy constructor to ensure a deep copy of the playlist, including all song details.

2. Design a class to model a shopping cart for an online store with dynamic storage for product items. Implement a copy constructor to support duplicating the shopping cart contents for different user sessions.

3. Develop a class representing a maze solver algorithm with a stack of traversal steps. Implement a copy constructor to enable creating a copy of the solver state for backtracking purposes.

4. Build a class to simulate a graph data structure with vertices and edges. Include a copy constructor to support duplication of the graph structure while maintaining proper connections between vertices.

5. Design a class representing a social media post with dynamic storage for comments and likes. Implement a copy constructor to facilitate sharing posts across multiple user profiles.

6. Create a class to model a calendar event with attributes like title, date, and attendees. Implement a copy constructor to enable duplicating calendar events for scheduling conflicts resolution.

7. Develop a class representing a scientific experiment setup with dynamic storage for equipment objects. Implement a copy constructor to support replicating the experiment setup for comparative analysis.

8. Build a class to simulate a digital image with a matrix of pixel values. Implement a copy constructor to ensure proper copying of the image data for image processing operations.

9. Design a class representing a crossword puzzle with dynamic storage for word entries. Implement a copy constructor to enable creating variations of the puzzle for different difficulty levels.

10. Create a class to model a student enrollment system with dynamic storage for course registrations. Implement a copy constructor to support duplicating student enrollment records for academic audits and analysis.

*/