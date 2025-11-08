/**
 *   author   : Shihab-glitch
 *   created  : 08 13:05:29
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int num1, num2, *ptr1 = &num1, *ptr2 = &num2;

    cin >> *ptr1 >> *ptr2;

    if(*ptr1 > *ptr2) cout << *ptr1 << " is the Max." << '\n';
    else cout << *ptr2 << " is the Max." << '\n';

    return 0;
}