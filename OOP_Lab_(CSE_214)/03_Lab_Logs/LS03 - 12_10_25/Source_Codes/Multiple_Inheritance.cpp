#include <bits/stdc++.h> // Multiple Inheritance
using namespace std;

class Grandparent
{
    public:
    void greet()
    {
        cout << "From Grand : Hello" << endl;
    }
};

class Parent
{
    public:
    void say()
    {
        cout << "From Parent : Hi" << endl;
    }
};

class Child: public Grandparent, public Parent 
{
    public:
    void meh() // Calling from Grandparent & Parent
    {
        cout << "All : " << endl;
        greet();
        say();
    }
};

int main()
{
    Child obj;
    obj.meh();
    return 0;
}