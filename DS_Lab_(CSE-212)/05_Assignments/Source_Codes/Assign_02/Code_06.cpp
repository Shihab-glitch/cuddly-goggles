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
        if (a>b && a>c)
        {
            if (b>c) {cout << b <<"\n";}
            else {cout << c << "\n";}
        }
        else if (b>a && b>c)
        {
            if (a>c) {cout << a <<"\n";}
            else {cout << c << "\n";}
        }
        else if (c>b && c>a)
        {
            if (b>a) {cout << b <<"\n";}
            else {cout << a << "\n";}
        }
    }
    return 0;
}