#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t; cin >> t;
    while(t--) {
        string hey;
        cin >> hey;
        if (hey[0] == 'a' || hey[1] == 'b' || hey[2] == 'c') {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    return 0;
}