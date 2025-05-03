#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    // Ceiling of (A / B)
    long long attacks = (A + B - 1) / B;

    cout << attacks << endl;
    return 0;
}
// This code calculates the minimum number of attacks required to defeat a monster with health A,
// given that each attack deals B damage. It uses the formula (A + B - 1) / B to compute the ceiling of A / B efficiently using integer arithmetic.
// The result is printed to the console.
// The formula (A + B - 1) / B is a common technique to compute the ceiling of a division without using floating-point arithmetic.