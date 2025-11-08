#include <bits/stdc++.h>
using namespace std;

class Parent // Parent Class
{
    public:
    int length = 10, seat = 41, wheel = 6;
};

class Child: public Parent // Child Class Inherits
{
    public:
    int engine = 400;
    int lNum = 335115;
};

int main()
{
    Child obj;
    cout << obj.length << endl;
    return 0;
}