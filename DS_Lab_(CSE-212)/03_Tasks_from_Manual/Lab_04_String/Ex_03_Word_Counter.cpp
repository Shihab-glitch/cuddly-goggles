/**
 *   author   : Shihab-glitch
 *   created  : 07 18:20:28
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str;

    getline(cin, str);

    int i=0, wrd=0;
    bool inWord = false;

    while(str[i]!='\0')
    {
        if (str[i] != ' ' && str[i] != '\t') 
        {
            if (!inWord) {
                wrd++;
                inWord = true;
            }
        } 
        else 
        {
            inWord = false;
        }
        i++;
    }

    cout << "Total number of words : " << wrd << '\n';

    return 0;
}