#include <iostream>
#include <cmath> // For power function
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // Compute A^B and B^A
    int result = pow(A, B) + pow(B, A);

    cout << result << endl;

    return 0;
}
