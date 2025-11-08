/**
 *   author   : Shihab-glitch
 *   created  : 07 10:56:36
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, orig, rev = 0, digit;

    cin >> n;
    orig = n;

    while (n!=0){
        digit = n%10;
        rev = rev*10 + digit;
        n /= 10;
    }

    if (orig == rev) cout << orig << " is a Palindrome." << '\n';
    else cout << orig << " is not a Palindrome." << '\n';

    return 0;
}