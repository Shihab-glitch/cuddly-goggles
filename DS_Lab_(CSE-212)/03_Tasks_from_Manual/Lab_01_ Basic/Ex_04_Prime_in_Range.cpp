/**
 *   author   : Shihab-glitch
 *   created  : 07 10:43:50
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int low, high, i, j, flag;

    cin >> low >> high;

    for (i=low; i<=high; ++i)
    {
        if (i<=1) continue;
        flag = 0;
        for (j=2; j*j<=i; ++j)
        {
            if (i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) cout << i << " ";
    }
    
    return 0;
}