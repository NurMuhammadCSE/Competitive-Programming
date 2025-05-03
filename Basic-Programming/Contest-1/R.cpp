#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Calculate area and perimeter
    int area = a * b;
    int perimeter = 2 * (a + b);

    // Output the results
    cout << area << " " << perimeter << endl;

    return 0;
}
