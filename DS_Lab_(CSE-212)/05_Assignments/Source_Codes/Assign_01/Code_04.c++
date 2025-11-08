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
        int A=0, B=0;
        char meh[6];
        cin >> meh;
        for (int j=0; j<6; ++j)
        {
            if (meh[j] == 'A') {A++;}
            else if (meh[j] == 'B') {B++;}
        }
        if (A>B) {cout << "A" << "\n";}
        else {cout << "B" << "\n";}
    }
    return 0;
}