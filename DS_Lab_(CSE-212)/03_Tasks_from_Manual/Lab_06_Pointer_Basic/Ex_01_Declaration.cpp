/**
 *   author   : Shihab-glitch
 *   created  : 08 12:59:03
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int m = 10, n, o;
    int* z = &m;

    cout << "Here is m=10, n and o are two integer variables and *z is an integer pointer\n\n";

    cout << "z stores the address of m = " << z << '\n';
    cout << "*z stores the value of m = " << *z << '\n';
    cout << "&m is the address of m = " << &m << '\n';
    cout << "&n stores the address of n = " << &n << '\n';
    cout << "&o stores the address of o = " << &o << '\n';
    cout << "&z stores the address of z = " << &z << '\n';

    return 0;
}