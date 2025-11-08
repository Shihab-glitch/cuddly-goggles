/**
 *   author   : Shihab-glitch
 *   created  : 08 12:06:22
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str;
    getline(cin, str);
    char ch;
    cin >> ch;

    bool found = false;
    for (char c : str) 
    {
        if (c == ch) 
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << ch << " is present in the string.\n";
    else
        cout << ch << " is not present.\n";

    return 0;
}