/**
 *   author   : Shihab-glitch
 *   created  : 07 13:21:32
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, j, temp;
    
    cin >> n;
    
    int arr[n], sort_arr[n];

    for (i=0; i<n; ++i) 
    {
        cin >> arr[i];
        sort_arr[i] = arr[i];
    }

    for (i=0; i<(n-1); ++i)
    {
        bool swapped = false;
        for (j=0; j<(n-i-1); ++j)
        {
            if (sort_arr[j]>sort_arr[j+1])
            {
                temp = sort_arr[j];
                sort_arr[j] = sort_arr[j+1];
                sort_arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    cout << sort_arr[n-2] << '\n';

    return 0;
}