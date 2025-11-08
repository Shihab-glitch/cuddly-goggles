/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 17:04:04
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int tt; cin >> tt;
    while(tt--) {
        long long int n, i, check = 0;
        cin >> n;
        
        long long int arr[n];
        for (i=0; i<n; ++i) cin >> arr[i];
        sort(arr, arr+n);

        if (n>=3)
        {
            for (i=0; i<(n-2); ++i)
            {
                if (arr[i] == arr[i+1] && arr[i] == arr[i+2])
                {
                    check = arr[i];
                    break;
                }
            }
            if (check) cout << check << '\n';
            else cout << -1 << '\n';
        }
        else cout << -1 << '\n';
    }
    return 0;
}