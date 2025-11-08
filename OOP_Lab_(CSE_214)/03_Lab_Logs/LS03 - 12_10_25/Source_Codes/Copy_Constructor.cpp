#include <bits/stdc++.h>
using namespace std;

class Cons
{
public:
    int num;
    
    // Parameterized constructor
    Cons(int x) 
    {
        num = x;
    }
    
    // Copy constructor
    Cons(Cons &a) {
        num = a.num;
    }
};

int main() 
{
    Cons a1(20);
    
    // Creating another object from a1
    Cons a2(a1);
    cout << a2.num << endl;
    return 0;
}