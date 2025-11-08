#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t; cin >> t;
    while(t--) {
        string s;
        int tot1 = 0, tot2 = 0;
        cin >> s;
        for (int i=0; i<6; ++i)
        {
            if (i>=0 && i<3) tot1 += s[i] - '0';
            else tot2 += s[i] - '0';
        }
        if (tot1 == tot2) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}