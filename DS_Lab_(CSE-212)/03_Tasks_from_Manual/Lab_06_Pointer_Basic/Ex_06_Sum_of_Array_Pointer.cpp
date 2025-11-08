/**
 *   author   : Shihab-glitch
 *   created  : 08 13:24:46
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, sum = 0;
    cin >> n;
    int *ptr;

    int arr1[n];
    for (i=0; i<n; ++i) cin >> arr1[i];

    ptr = arr1;

    for (i=0; i<n; ++i)
    {
        sum = (sum + *ptr);
        ptr++;
    }

    cout << "The Sum of Array is : " << sum << '\n';
    
    return 0;
}