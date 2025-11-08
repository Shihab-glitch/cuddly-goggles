/**
 *   author   : Shihab-glitch
 *   created  : 07 17:26:17
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, search, high, low, mid;

    cin >> n;

    int arr[n];

    for (i=0; i<n; ++i) cin >> arr[i];
    
    cin >> search;

    low = 0;
    high = (n-1);

    while (low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid] == search)
        {
            cout << search << " found at position : " << (mid+1) << '\n';
            return 0;
        }
        else if (arr[mid]<search) low = (mid+1);
        else high = (mid-1);
    }

    cout << search << " not found in array" << '\n';
    return 0;
}