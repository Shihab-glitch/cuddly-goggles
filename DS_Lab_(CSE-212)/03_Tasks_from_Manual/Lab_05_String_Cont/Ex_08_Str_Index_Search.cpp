/**
 *   author   : Shihab-glitch
 *   created  : 08 12:30:11
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str, search;
    getline(cin, str);
    getline(cin, search);

    int pos = -1;
    bool found = false;

    for (int i = 0; i <= (int)str.size() - (int)search.size(); ++i) 
    {
        int j;
        for (j = 0; j < (int)search.size(); ++j) 
        {
            if (str[i + j] != search[j]) {
                break;
            }
        }
        if (j == (int)search.size()) {
            found = true;
            pos = i;
            break;
        }
    }

    if (found)
        cout << "The substring exists in the string at position " << pos << ".\n";
    else
        cout << "The substring does not exist in the string.\n";
}