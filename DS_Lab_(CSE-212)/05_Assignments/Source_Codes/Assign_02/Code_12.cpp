#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t; cin >> t;
    while(t--) {
        int rating;
        cin >> rating;
        if (rating <= 1399) cout << "Division 4" << "\n";
        else if (rating >= 1400 && rating <= 1599) cout << "Division 3" << "\n";
        else if (rating >= 1600 && rating <= 1899) cout << "Division 2" << "\n";
        else if (rating >= 1900) cout << "Division 1" << "\n";
    }
    return 0;
}