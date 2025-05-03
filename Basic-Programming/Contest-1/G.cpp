#include <iostream>
using namespace std;

int main() {
    int abc;
    cin >> abc;

    int a = abc / 100;
    int b = (abc / 10) % 10;
    int c = abc % 10;

    int bca = b * 100 + c * 10 + a;
    int cab = c * 100 + a * 10 + b;

    int sum = abc + bca + cab;
    cout <<sum << endl;

    return 0;
}
