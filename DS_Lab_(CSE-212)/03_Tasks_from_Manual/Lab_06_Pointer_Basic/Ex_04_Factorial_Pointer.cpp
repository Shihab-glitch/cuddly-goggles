/**
 *   author   : Shihab-glitch
 *   created  : 08 13:12:18
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void findFact(int, int*);

int main() {
    fast_io;
    
    int fact, num1;
    cin >> num1;

    findFact(num1, &fact);

    cout << "Factorial of " << num1 << " is : " << fact << '\n';
    
    return 0;
}

void findFact(int n, int *f)
{
    int i;
    *f = 1;
    for (i=1; i<=n; ++i)
    {
        *f = (*f * i);
    }
}