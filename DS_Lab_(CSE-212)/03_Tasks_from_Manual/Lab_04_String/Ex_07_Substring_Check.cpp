/**
 *   author   : Shihab-glitch
 *   created  : 08 09:06:16
**/
#include <bits/stdc++.h> // Not case sensitive.
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    string str, sub;
    getline(cin, str);
    getline(cin, sub);

    bool found = false;

    for (int i = 0; i <= (int)str.size() - (int)sub.size(); ++i) 
    {
        int j;
        for (j = 0; j < (int)sub.size(); ++j) 
        {
            if (str[i + j] != sub[j]) break;
        }
        if (j == (int)sub.size()) 
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "The substring exists in the string.\n";
    else
        cout << "The substring does not exist in the string.\n";

    return 0;
    
}