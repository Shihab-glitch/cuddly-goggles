#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t; cin >> t;
    while(t--) {
        string S;
        cin >> S;

        int l = S.length();
        if (l==3)
        {
            for (int i=0; i<3; ++i) S[i] = tolower(S[i]);
            string match = "yes";
            if (S == match) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
}