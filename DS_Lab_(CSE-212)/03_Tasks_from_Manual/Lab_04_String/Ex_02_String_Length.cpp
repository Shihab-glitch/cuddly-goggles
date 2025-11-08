/**
 *   author   : Shihab-glitch
 *   created  : 07 18:07:47
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str;

    getline(cin, str);

    int l = 0;

    while(str[l]!=0)
    {
        l++;
    }

    cout << "Length : " << l << '\n';

    return 0;
}