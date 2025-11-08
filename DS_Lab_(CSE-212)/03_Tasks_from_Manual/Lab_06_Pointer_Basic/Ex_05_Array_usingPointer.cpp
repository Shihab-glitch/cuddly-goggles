/**
 *   author   : Shihab-glitch
 *   created  : 08 13:19:14
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n;
    cin >> n;
    
    int myNumbers[n];
    for (int i=0; i<n; ++i) cin >> myNumbers[i];

    int *ptr = myNumbers;

    for (int i=0; i<n; ++i)
    {
        cout << *(ptr+i) << '\n';
    }
    return 0;
}