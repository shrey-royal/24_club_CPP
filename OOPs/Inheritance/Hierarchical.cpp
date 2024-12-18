#include<iostream>
using namespace std;

class Manager {
public:
    void assignTask() {
        cout << "Assigning new task!!!" << endl;
    }
};

class Developer : public Manager {
public:
    void completeTask() {
        cout << "Completing developer task!!!" << endl;
    }
};

class Engineer : public Manager {
public:
    void completeTask() {
        cout << "Completing engineering task!!!" << endl;
    }
};

int main() {
    Developer dev;
    Engineer eng;

    dev.assignTask();
    dev.completeTask();

    eng.assignTask();
    eng.completeTask();

    return 0;
}