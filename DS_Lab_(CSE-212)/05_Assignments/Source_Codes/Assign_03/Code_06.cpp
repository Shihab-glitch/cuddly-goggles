/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 19:55:48
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    short int tt; cin >> tt;
    while(tt--) {
        short int n, i; cin >> n;

        int arr[n];

        for (i=0; i<n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr, arr+n);

        bool check = true;
        for (i=0; i<(n-1); ++i)
        {
            if (arr[i]==arr[i+1]) check = false;
        }

        cout << (check ? "YES" : "NO") << '\n';
    }
    return 0;
}