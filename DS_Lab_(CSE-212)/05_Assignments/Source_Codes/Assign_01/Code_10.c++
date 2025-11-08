#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string s;

    for (int i=0; i<t; ++i)
    {
        cin >> s;
        int a = s.length();
        int last = (a-1), last2 = (a-2);
        if (s == "us") {cout << "i" << "\n";}
        else if (a > 2) 
        {
            if (s[last] == 's' && s[last2] == 'u')
            {
                s[last] = ' ';
                s[last2] = 'i';
            }
        }
        if (a>2) {cout << s << "\n";}
    }
    return 0;
}