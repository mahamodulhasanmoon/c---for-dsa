#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    cout << "You entered: " << x << " and " << y << endl;
    cout << "Minimum: " << min(x, y) << endl;
    cout << "Maximum: " << max(x, y) << endl;
    return 0;
}