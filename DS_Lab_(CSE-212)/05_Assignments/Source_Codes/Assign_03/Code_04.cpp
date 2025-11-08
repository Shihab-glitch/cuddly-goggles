/**
 *   author   : Shihab-glitch
 *   created  : 08.11.2025 22:50:09
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    short int tt; cin >> tt;
    while(tt--) {
        short int n, i, count = 0;
        cin >> n;

        string S;
        cin >> S;

        sort(S.begin(), S.end());

        for (i=0; i<n; ++i)
        {
            if(S[i]==S[i+1]) count+=1;
            else count += 2;
        }

        cout << count << '\n';
    }
    return 0;
}