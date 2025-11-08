/**
 *   author   : Shihab-glitch
 *   created  : 07 10:09:51
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, j;
    
    cin >> n;
    
    for (i=1; i<=n; ++i)
    {
        for (j=1; j<=i; ++j)
        {
            cout << "* ";
        }
        cout << '\n';
    }
    
    return 0;
}