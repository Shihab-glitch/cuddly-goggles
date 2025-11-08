#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t; cin >> t;
    while(t--) {
        int a[4], head = 0;
        for (int i=0; i<4; ++i) cin >> a[i];
        for (int i=0; i<4; ++i)
        {
            if (a[i] > a[0]) head++;
        }
        cout << head << "\n";
    }
    return 0;
}