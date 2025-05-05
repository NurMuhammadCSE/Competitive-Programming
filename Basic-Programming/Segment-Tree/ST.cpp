#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int arr[N];
int seg[4 * N];

// Build Segment Tree
void build(int idx, int low, int high)
{
    if (low == high)
    {
        seg[idx] = arr[low];
        return;
    }

    int mid = low + (high - low) / 2;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    build(left, low, mid);
    build(right, mid + 1, high);

    seg[idx] = seg[left] + seg[right];
}

// Query sum in range [l, r]
int query(int idx, int low, int high, int l, int r)
{
    if (r < low || high < l)
    {
        return 0;
    }

    if (l <= low and high <= r)
    {
        return seg[idx];
    }

    int mid = (low + high) / 2;
    int left = query(2 * idx + 1, low, mid, l, r);
    int right = query(2 * idx + 2, mid + 1, high, l, r);

    return left + right;
}

// Update arr[i] = val
void update(int idx, int low, int high, int i, int val)
{
    if (low == high)
    {
        seg[idx] = val;
        arr[i] = val;
        return;
    }

    int mid = (low + high) / 2;
    if (i <= mid)
    {
        update(2 * idx + 1, low, mid, i, val);
    }
    else
    {
        update(2 * idx + 2, mid + 1, high, i, val);
    }

    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    build(0, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    int l, r;
    cin >> l >> r;
    cout << query(0, 0, n - 1, l, r) << endl;

    int idx, val;
    cin >> idx >> val;
    update(0, 0, n-1,idx, val);
    cout << query(0, 0, n-1, l, r) << endl;

}