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
        int c = (floor((a+b)/2));

        cout << ((c-a)+(b-c)) << "\n";
    }
    return 0;
}