/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 20:06:08
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    short int tt; cin >> tt;
    while(tt--) {
        short int n, i, temp = 0, check = 0;
        cin >> n;
        short int arr[n];
        
        for (i=0; i<n; ++i)
        {
            cin >> arr[i];
        }

        for (i=0; i<n; ++i)
        {

            if (arr[i] == 0) check++;
            else check = 0;
            temp = max(temp, check);

        }

        cout << temp << '\n';
    }
    return 0;
}