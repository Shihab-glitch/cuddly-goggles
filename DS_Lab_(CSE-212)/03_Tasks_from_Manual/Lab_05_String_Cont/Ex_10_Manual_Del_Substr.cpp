/**
 *   author   : Shihab-glitch
 *   created  : 08 12:51:14
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    char str[100];
    int l = 0, i, n, pos;

    cin.getline(str, 100);

    cin >> pos;
    cin >> n;

    l = strlen(str);

    if (pos < 0 || pos >= l) {
        cout << "Invalid position!\n";
        return 0;
    }
    if (n < 0 || pos + n > l) {
        n = l - pos;
    }

    for (i = pos + n; i < l; i++) {
        str[i - n] = str[i];
    }

    str[l - n] = '\0';

    cout << "The string after deletion is: " << str << '\n';

    return 0;
}