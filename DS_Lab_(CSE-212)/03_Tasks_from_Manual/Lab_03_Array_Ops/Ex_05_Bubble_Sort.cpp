/**
 *   author   : Shihab-glitch
 *   created  : 07 17:51:01
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, j, temp;

    cin >> n;

    int arr[n];

    for (i=0; i<n; ++i) cin >> arr[i];

    for (i=0; i<(n-1); ++i)
    {
        for (j=0; j<(n-i-1); ++j)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (i=0; i<n; ++i) cout << arr[i] << " ";
    cout << '\n';
    
    return 0;
}