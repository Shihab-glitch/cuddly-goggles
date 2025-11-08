#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main()
{
    fast_io;
    
    int t; cin >> t;
    while(t--)
    {
        short int p;
        cin >> p;
        string n;
        cin >> n;
        if (p != 5)
        {
            cout << "NO" << '\n';
            continue;
        }
        short int T = 0, i = 0, m = 0, u = 0, r = 0;
        for (short int z = 0; z < p; z++)
        {
            if (n[z] == 'T') T++;
            else if (n[z] == 'i') i++;
            else if (n[z] == 'm') m++;
            else if (n[z] == 'u') u++;
            else if (n[z] == 'r') r++;
        }

        if (T == 1 && i == 1 && m == 1 && u == 1 && r == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}