/**
 *   author   : Shihab-glitch
 *   created  : 08 13:37:50
**/
#include <bits/stdc++.h> // Swap
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void swapx(int* x, int* y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    cout << "Inside Swap : x = " << *x << " y = " << *y << '\n'; 
}

int main() {
    fast_io;
    int a, b;
    cin >> a >> b;

    swapx(&a, &b);

    cout << "Inside Main : a = " << a << " b = " << b << '\n'; 
    return 0;
}