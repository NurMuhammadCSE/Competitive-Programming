#include <iostream>
#include <iomanip> // setprecision এর জন্য
using namespace std;

int main() {
    double r;
    cin >> r;

    double area = 3.141592653589793 * r * r;
    double circumference = 2 * 3.141592653589793 * r;

    cout << fixed << setprecision(6) << area << " " << circumference << endl;

    return 0;
}
