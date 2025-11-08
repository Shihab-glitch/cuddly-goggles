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
        char a[4], b[4];
        cin >> a >> b;
        cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << "\n";
    }
    return 0;
}