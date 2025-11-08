/**
 *   author   : Shihab-glitch
 *   created  : 08 10:16:57
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    int r1 = str1.compare(str2);

    if (r1 == 0 ) cout << "Equal" << '\n';
    else if (r1 < 0) cout << str1 << " comes before " << str2 << '\n';
    else cout << str1 << " comes after " << str2 << '\n';

    return 0;
}