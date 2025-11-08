/**
 *   author   : Shihab-glitch
 *   created  : 07 10:35:51
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, sum = 0, digit;
    
    cin >> n;

    while (n!=0){
        digit = n%10;
        sum += digit;
        n /= 10;
    }

    cout << "Sum of Digits : " << sum << '\n';

    return 0;
}