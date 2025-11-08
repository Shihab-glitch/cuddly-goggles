/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 17:48:43
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    short int tt; cin >> tt;
    while(tt--) {
        
        short int n; cin >> n;

        string str1, str2;
        cin >> str1 >> str2;

        bool flag = true;

        while (n--)
        {
            if ((str1[n]=='R' && str2[n]!='R') || (str1[n]!='R' && str2[n]=='R')) flag = false;
        }

        cout << (flag ? "YES" : "NO") << '\n';

    }
    
    return 0;
}