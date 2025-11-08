/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 17:17:46
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int tt; cin >> tt;
    while(tt--) {
        long long int n, i, prod = 1;
        cin >> n;
        long long int arr[n];
        for (i=0; i<n; ++i) cin >> arr[i];

        sort(arr, arr+n);

        arr[0] += 1;

        for (i=0; i<n; ++i)
        {
            prod *= arr[i];
        }

        cout << prod << '\n';
    }
    return 0;
}