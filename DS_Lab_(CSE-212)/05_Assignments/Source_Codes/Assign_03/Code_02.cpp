/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 22:14:01
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    short int tt; cin >> tt;
    while(tt--) {

        short int n, i;
        cin >> n;

        int eat = 0;
        int arr[n];
        for (i=0; i<n; ++i) cin >> arr[i];

        sort(arr, arr+n);

        for (i=0; i<n; ++i)
        {
            eat += (arr[i] - arr[0]);
        }
        cout << eat << '\n';
    }
    return 0;
}