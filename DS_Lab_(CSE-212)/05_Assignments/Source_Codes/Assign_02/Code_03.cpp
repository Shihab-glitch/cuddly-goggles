#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t; cin >> t;
    while(t--) {
        int count = 0;
        string given;
        cin >> given;
        string have = "codeforces";

        for (int i=0; i<10; ++i)
        {
            if (given[i] != have[i]) 
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}