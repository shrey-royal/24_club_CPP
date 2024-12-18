#include<iostream>
using namespace std;

class Monitor {
public:
    void getMonitorSpecs() {
        cout << "Monitor Specs..." << endl;
    }
};

class CPU {
public:
    void getCPUSpecs() {
        cout << "CPU Specs..." << endl;
    }
};

class PC : public Monitor, public CPU {
public:
    void getPCSpecs() {
        cout << "PC Sepcs: " << endl;
    }
};


int main() {
    PC pc;

    pc.getPCSpecs();
    pc.getMonitorSpecs();
    pc.getCPUSpecs();

    return 0;
}