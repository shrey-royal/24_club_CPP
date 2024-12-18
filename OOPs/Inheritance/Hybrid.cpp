#include<iostream>
using namespace std;

class Base {
public:
    void fun() { cout << "Base" << endl; }
};

class Parent1 : virtual public Base { };    // Virtual Inheritance

class Parent2 : virtual public Base { };    // Virtual Inheritance

class Child : public Parent1, public Parent2 { };

int main() {
    Child c;

    c.fun();
}