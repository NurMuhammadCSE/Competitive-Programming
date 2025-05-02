#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    if ((z < y and z > x) || (z > y and z < x))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}