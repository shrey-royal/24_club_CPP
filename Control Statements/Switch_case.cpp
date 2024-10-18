#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    
    switch (a>b) {
    case true:
        cout << "Maximum Number between " << a << " and " << b << " is " << a << endl;
        break;
    
    case false:
        cout << "Maximum Number between " << a << " and " << b << " is " << b << endl;
        break;
    }

    return 0;
}