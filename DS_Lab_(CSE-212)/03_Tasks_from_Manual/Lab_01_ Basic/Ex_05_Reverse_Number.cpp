/**
 *   author   : Shihab-glitch
 *   created  : 07 10:50:32
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, rev = 0, digit;

    cin >> n;

    while (n!=0){
        digit = n%10;
        rev = rev*10 + digit;
        n /= 10;
    }

    cout << rev << '\n';

    return 0;
}