/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 19:28:28
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int tt; cin >> tt;
    while(tt--) {

        short int n, z;
        cin >> n;

        string s;
        cin >> s;

        sort(s.begin(), s.end());

        z = (s[s.length()-1]-'a') + 1;

        cout << z << '\n';
        
    }
    return 0;
}