/**
 *   author   : Shihab-glitch
 *   created  : 07 10:26:24
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, first = 0, second = 1, next, i;
    
    cin >> n;

    for (i=0; i<n; ++i)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}