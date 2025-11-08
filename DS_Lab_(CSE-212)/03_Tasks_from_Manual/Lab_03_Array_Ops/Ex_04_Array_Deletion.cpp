/**
 *   author   : Shihab-glitch
 *   created  : 07 17:46:50
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, pos, i;

    cin >> n;

    int arr[n];

    for (i=0; i<n; ++i) cin >> arr[i];

    cin >> pos;

    for (i=(pos-1); i<(n-1); ++i)
    {
        arr[i] = arr[i+1];
    }
    n--;

    for (i=0; i<n; ++i) cout << arr[i] << " ";
    cout << '\n';

    return 0;
}