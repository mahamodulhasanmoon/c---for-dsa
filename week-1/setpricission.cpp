#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x = 3.14159265358979323846;
    cout << "Default precision: " << x << endl;
    cout << "Set precision to 2: " << fixed << setprecision(2) << x << endl;
    cout << "Set precision to 5: " << fixed << setprecision(5) << x << endl;
    return 0;
}