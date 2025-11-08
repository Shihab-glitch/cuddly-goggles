/**
 *   author   : Shihab-glitch
 *   created  : 08 13:01:18
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int num1, num2, *ptr1, *ptr2, sum;
    cin >> num1 >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    cout << "Sum : " << sum << '\n';
    
    return 0;
}