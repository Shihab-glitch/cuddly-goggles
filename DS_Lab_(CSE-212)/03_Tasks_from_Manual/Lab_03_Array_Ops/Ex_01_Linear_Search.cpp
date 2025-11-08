/**
 *   author   : Shihab-glitch
 *   created  : 07 17:14:35
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, search, found = 0;

    cin >> n;

    int arr[n];

    for (i=0; i<n; ++i) cin >> arr[i];

    cin >> search;

    for (i=0; i<n; ++i)
    {
        if (arr[i]==search)
        {
            cout << search << " found @ Position : " << (i+1) << '\n';
            found = 1;
            break;
        }
    }

    if(!found) {cout << search << " was not found" << '\n';}

    return 0;
}