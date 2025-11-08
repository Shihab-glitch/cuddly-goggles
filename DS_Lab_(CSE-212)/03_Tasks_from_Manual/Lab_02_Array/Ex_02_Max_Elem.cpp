/**
 *   author   : Shihab-glitch
 *   created  : 07 11:11:06
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, max;

    cin >> n;

    int arr[n];

    for (i=0; i<n; ++i)
    {
        cin >> arr[i];
    }

    max = arr[0];
    for (i=1; i<n; ++i)
    {
        if (arr[i]>max) max = arr[i];
    }

    cout << max << '\n';

    return 0;
}