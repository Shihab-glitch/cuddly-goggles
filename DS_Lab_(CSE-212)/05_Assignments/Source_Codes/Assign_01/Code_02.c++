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
        int s, sum=0;
        cin >> s;
        sum = (s/10 + s%10);
        cout << sum << "\n";
    }
    return 0;
}