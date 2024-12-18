#include<iostream>
using namespace std;

class Animal {
protected:
    string name;
public:
    Animal(string name) {
        this->name = name;
    }

    void eat() {
        cout << name << " is eating!" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) { }

    void bark() {
        cout << name << " is barking!" << endl;
    }
};

class Puppy : public Dog {
public:
    Puppy(string name) : Dog(name) { }
    void play() {
        cout << name << " is playing!" << endl;
    }
};

int main() {
    Puppy pup("happy");

    pup.eat();
    pup.bark();
    pup.play();

    return 0;
}