/**
 *   author   : Shihab-glitch
 *   created  : 09.11.2025 00:28:35
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    short int tt; cin >> tt;
    while(tt--) {
        short int n, i, x=0, y=0;
        cin >> n;
        for (i=1; i<=n; ++i)
        {
            short int a, b;
            cin >> a >> b;
            if (a<=10 && b>y)
            {
                y=b;
                x=i;
            }
        }
        cout << x << '\n';
    }
    return 0;
}