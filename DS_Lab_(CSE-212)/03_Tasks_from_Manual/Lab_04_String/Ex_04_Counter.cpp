/**
 *   author   : Shihab-glitch
 *   created  : 07 23:06:53
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str;

    getline(cin, str);

    int alpha, dig, spcl, i;
    alpha = dig = spcl = i = 0;

    while (str[i] != '\0')
    {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) alpha++;
        else if (str[i]>='0' && str[i]<='9') dig++;
        else spcl++;
        ++i;
    }

    cout << "  Alphabets | Digits | Special" << '\n';
    cout << "\t" << alpha << "\t" << dig << "\t" << spcl << '\n';
    return 0;
}