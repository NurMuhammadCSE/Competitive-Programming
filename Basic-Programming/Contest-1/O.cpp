#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ctz = 0;
    while ((N & 1) == 0) {
        ctz++;
        N >>= 1; // divide N by 2 using bit shift
    }

    cout << ctz << endl;
    return 0;
}
