/**
 *   author   : Shihab-glitch
 *   created  : 08 08:44:13
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

#define STR_SIZE 100
#define CHR_NO 255

int main() {
    fast_io;

    string str;
    int ch_fre[CHR_NO] = {0};
    int max_idx = 0;

    getline(cin, str);

    for (int i = 0; i < (int)str.size(); ++i) 
    {
        unsigned char ascii = str[i];
        ch_fre[ascii]++;
    }

    for (int i = 0; i < CHR_NO; ++i) 
    {
        if (i != 32 && ch_fre[i] > ch_fre[max_idx]) 
        {
            max_idx = i;
        }
    }

    cout << "The Highest frequency of character '" 
         << (char)max_idx 
         << "' appears number of times : " 
         << ch_fre[max_idx] 
         << '\n';

    return 0;
}