#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a==b) {cout << c << "\n";}
        else if (c==b) {cout << a << "\n";}
        if (a==c) {cout << b << "\n";}
    }
    return 0;
}