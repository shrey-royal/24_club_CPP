#include<iostream>
using namespace std;

int main() {
    char grade;

    cout << "Input the grade (E, V, G, A, F): ";
    cin >> grade;

    cout << "\nYou have chosen : ";
    if (grade == 'E') cout << "Excellent";
    else if (grade == 'V') cout << "Very Good";
    else if (grade == 'G') cout << "Good";
    else if (grade == 'A') cout << "Average";
    else if (grade == 'F') cout << "Fail";
    else cout << "Invalid Grade!";

    return 0;
}