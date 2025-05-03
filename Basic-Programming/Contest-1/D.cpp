#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m; // Input two integers n and m

    cout << 7 - n - m << endl; // Output the result of 7 minus the sum of n and m
    // The result represents the number of remaining days in a week
    // after subtracting the days represented by n and m.
    // For example, if n = 2 (Tuesday) and m = 3 (Wednesday), the output will be 2 (Thursday).
    // This is because there are 7 days in a week, and if 2 and 3 are already taken, only 2 days remain.
}