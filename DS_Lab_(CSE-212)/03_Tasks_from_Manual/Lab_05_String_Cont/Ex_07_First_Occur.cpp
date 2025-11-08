/**
 *   author   : Shihab-glitch
 *   created  : 08 12:15:45
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    size_t pos = str1.find(str2);

    if (pos != string::npos)
    {
        cout << "Substring found at position: " << pos << '\n';
        cout << "Substring from position: " << str1.substr(pos) << '\n';
    }
    else
        cout << "Substring not found.\n";

    return 0;
}