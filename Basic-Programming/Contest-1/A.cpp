#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int lastE = n - n / 10 * 10; // last digit of n
    n = n / 10; // remove last digit from n
    int lastE2 = n - n / 10 * 10; // second last digit of n
    char ans = lastE2 + '0'; // convert to char
    char ans2 = lastE + '0'; // convert to char

    cout << 'K' << ans << ans2 << endl; // print result
    // cout << 'K' << lastE2 << lastE << endl; // print result
}