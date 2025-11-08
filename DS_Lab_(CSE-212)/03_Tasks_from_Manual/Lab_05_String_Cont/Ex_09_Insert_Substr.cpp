/**
 *   author   : Shihab-glitch
 *   created  : 08 12:36:49
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    string str, add;
    int pos;

    getline(cin, str);
    getline(cin, add);

    cin >> pos;

    if(pos < 0 || pos > (int)str.size()) {
        cout << "Invalid position!\n";
        return 0;
    }
    
    str.insert(pos, add);

    cout << "After inserting, the string is: " << str << '\n';

    return 0;
}