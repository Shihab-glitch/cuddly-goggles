/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 21:17:00
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    short int tt; cin >> tt;
    while(tt--) {
        short int n, i, even = 0, odd = 0;
        cin >> n;
        short int arr[n];

        for (i=0; i<n; ++i)
        {
            cin >> arr[i];
            if (arr[i]%2==0) even+=arr[i];
            else odd+=arr[i];
        }

        cout << (even>odd ? "YES \n":"NO \n");
    }
    return 0;
}