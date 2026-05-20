#include <iostream>
using namespace std;
int main() {
    int x = 10;
    char y = 'A';
    cout << x << endl;
    cout << y << endl;


    // first ask date of birth 
    int day, month, year;
    cout << "Enter your date of birth (day month year): ";
    cin >> day >> month >> year;
    cout << "Your date of birth is: " << day << "/" << month << "/" << year << endl;

    return 0;
}