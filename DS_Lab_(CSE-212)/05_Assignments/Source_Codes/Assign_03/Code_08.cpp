/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 21:34:45
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    short int tt; cin >> tt;
    while(tt--) {
        short int n, i, x = 1, y = 1, h = 0, v = 0;
        cin >> n;

        string S;
        cin >> S;

        bool flag = true;
        for (i=0; i<n; ++i)
        {
            if (S[i] == 'L') h--;
            if (S[i] == 'R') h++;
            if (S[i] == 'U') v++;
            if (S[i] == 'D') v--;

            if (x == h && y == v) 
            {
                flag = false; 
                break;
            }
        }

        if (flag) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}