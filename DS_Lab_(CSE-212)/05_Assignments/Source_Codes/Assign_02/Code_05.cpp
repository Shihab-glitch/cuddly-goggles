#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t; cin >> t;
    while(t--) {
        char meh;
        cin >> meh;
        if (meh == 'c' || meh == 'o' || meh == 'd' ||meh == 'e' ||meh == 'f' ||meh == 'r' ||meh == 's')
        {
            cout << "YES" << "\n";
        }
        else {cout << "NO" << "\n";}
    }
    return 0;
}