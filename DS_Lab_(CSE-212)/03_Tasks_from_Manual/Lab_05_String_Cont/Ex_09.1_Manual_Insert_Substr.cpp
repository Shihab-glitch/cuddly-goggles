/**
 *   author   : Shihab-glitch
 *   created  : 08 12:40:56
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    char str[100], add[50];
    int l1 = 0, l2 = 0, i, pos;

    cin.getline(str, 100);
    cin.getline(add, 50);

    cin >> pos;

    while (str[l1] != '\0') l1++;
    while (add[l2] != '\0') l2++;

    if (pos < 0 || pos > l1) {
        cout << "Invalid position!\n";
        return 0;
    }

    for (i = l1; i >= pos; i--) {
        str[i + l2] = str[i];
    }

    for (i = 0; i < l2; i++) {
        str[pos + i] = add[i];
    }

    str[l1 + l2] = '\0';

    cout << "After inserting, the string is: " << str << '\n';

    return 0;
}