#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    map<long long, int> prefixCount;
    prefixCount[0] = 1; // base case

    long long prefixSum = 0;
    long long count = 0;

    for (int i = 0; i < n; ++i) {
        prefixSum += a[i];

        // যদি prefixSum - x আগেই থাকে
        count += prefixCount[prefixSum - x];

        // এখনকার prefixSum কে future এর জন্য রাখো
        prefixCount[prefixSum]++;
    }

    cout << count << endl;
    return 0;
}
