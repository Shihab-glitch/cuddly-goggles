/**
 *   author   : Shihab-glitch
 *   created  : 08 09:59:29
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str1, str2 = "";
    getline(cin, str1);

    int pos, l, start, count = 0;

    cin >> pos >> l;

    start = (pos-1);
    while(count<l && (start+count)<(int)str1.length())
    {
        str2 += str1[start+count];
        count++;
    }
    
    cout << "The substring received from the string : " << str2 << '\n';
    return 0;
}