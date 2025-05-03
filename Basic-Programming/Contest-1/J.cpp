#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    int sum = A + B;
    cout << sum << 1 << endl; // শেষে 1 বসিয়ে দেওয়া
    

    int result = sum * 10 + 1; // সংখ্যার শেষে ডিজিট 1 বসানো
    cout << result << endl;
    return 0;
}
