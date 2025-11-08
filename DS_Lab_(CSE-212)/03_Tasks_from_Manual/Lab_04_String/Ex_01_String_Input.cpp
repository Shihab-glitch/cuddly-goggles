/**
 *   author   : Shihab-glitch
 *   created  : 07 18:02:52
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    char str[50]; // C-Style
    fgets(str, sizeof str, stdin);
    cout << str << '\n';

    string str1; //Modern C++ Way
    getline(cin, str1);
    cout << str1 << '\n';

    return 0;

}