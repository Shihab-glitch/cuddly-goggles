/**
 *   author   : Shihab-glitch
 *   created  : 08 10:53:56
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    string strcom = str1 + " " + str2;
    string strcom1 = str1 + str2;
    
    cout << "With Space : " << strcom << '\n';
    cout << "Without Space : " << strcom1 << '\n';

    return 0;
}