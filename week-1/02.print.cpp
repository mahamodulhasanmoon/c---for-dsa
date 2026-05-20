#include <iostream>
int main() {
    int x = 10;
    char y = 'A';
    std::cout << x << std::endl;
    std::cout << y << std::endl;


    // first ask date of birth 
    int day, month, year;
    std::cout << "Enter your date of birth (day month year): ";
    std::cin >> day >> month >> year;
    std::cout << "Your date of birth is: " << day << "/" << month << "/" << year << std::endl;

    return 0;
}