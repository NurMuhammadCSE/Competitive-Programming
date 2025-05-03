#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A; // Read an integer A from input

    int multiply = A * 2000; // Multiply A by 2000
    int ans = multiply / 500; // Divide the result by 500

    cout << ans << endl; // Output the final result

    return 0;
}
