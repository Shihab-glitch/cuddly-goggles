/**
 *   author   : Shihab-glitch
 *   created  : 07 16:32:44
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, j, count = 0;

    cin >> n;

    int arr[n];

    for (i=0; i<n; ++i) cin >> arr[i];

    for (i=0; i<n; ++i)
    {
        for (j=(i+1); j<n; ++j)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout << "Number of Duplicate Elements : " << count << " " << '\n';

    return 0;
}