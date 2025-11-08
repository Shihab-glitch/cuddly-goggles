/**
 *   author   : Shihab-glitch
 *   created  : 07 11:03:12
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, sum = 0;

    cin >> n;
    
    int arr[n];

    for (i=0; i<n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum << '\n';
    
    return 0;
}