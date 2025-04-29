#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int lastD = n - (n/10 )* 10;
    int lastD = n - n / 10 * 10;
    n = n / 10;
    // int lastD2 = n - (n/10)* 10;
    int lastD2 = n - n / 10 * 10;
    char ans = lastD2 + '0';
    char ans2 = lastD + '0';
    cout << 'K' << ans << ans2 << endl;
}
