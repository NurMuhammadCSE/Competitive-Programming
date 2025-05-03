#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int d = a / b;           // পূর্ণ সংখ্যার ভাগফল
    int r = a % b;           // ভাগশেষ
    double f = (double)a / b; // ভগ্নাংশ ফলাফল

    cout << d << " " << r << " " << fixed << setprecision(5) << f << endl;
    return 0;
}
