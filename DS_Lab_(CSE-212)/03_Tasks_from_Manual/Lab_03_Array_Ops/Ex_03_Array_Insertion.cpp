/**
 *   author   : Shihab-glitch
 *   created  : 07 17:35:56
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, pos, val, i;

    cin >> n;

    int arr[n];

    for (i=0; i<n; ++i) cin >> arr[i];

    cin >> val >> pos;

    for (i=n; i>=pos; --i)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    n++;

    for (i=0; i<n; ++i) cout << arr[i] << " ";
    cout << '\n';

    return 0;
}