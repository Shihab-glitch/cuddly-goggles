/**
 *   author   : Shihab-glitch
 *   created  : 07 23:26:46
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str;
    getline(cin, str);

    int i, len, vow = 0, cons = 0;
    len = str.length();

    for (i=0; i<len; ++i)
    {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') 
            || (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
            {
                vow++;
            }
            else cons++;
        }
    }

    cout << "Total number of Vowels : " << vow << '\n';
    cout << "Total number of Consonants : " << cons << '\n';

    return 0;
}