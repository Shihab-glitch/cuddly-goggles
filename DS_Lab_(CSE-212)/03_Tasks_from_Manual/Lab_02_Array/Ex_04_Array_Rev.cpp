/**
 *   author   : Shihab-glitch
 *   created  : 07 16:20:03
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, temp;

    cin >> n;

    int arr[n];

    for (i=0; i<n; ++i) cin >> arr[i];
    
    for (i=0; i<(n/2); ++i)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for (i=0; i<n; ++i) cout << arr[i] << " ";
    cout << '\n';

    return 0;
}