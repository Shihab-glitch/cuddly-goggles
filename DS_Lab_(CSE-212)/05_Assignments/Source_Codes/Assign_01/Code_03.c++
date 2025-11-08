#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i=0; i<t; ++i)
    {
        int a, b;
        cin >> a >> b;
        if (a>=b) {cout << b << " " << a << "\n";}
        else {cout << a << " " << b << "\n";}
    }
    return 0;
}