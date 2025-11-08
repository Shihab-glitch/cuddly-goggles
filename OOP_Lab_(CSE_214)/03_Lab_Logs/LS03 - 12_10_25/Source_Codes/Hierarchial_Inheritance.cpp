#include <bits/stdc++.h> // Hierarchial Inheritance
using namespace std;

class Person
{
    public:
    void name(){
        cout << "Shihab" << endl;
    }
    void age()
    {
        cout << "21" << endl;
    }
    void Teach()
    {
        cout << "Saad Sir" << endl;
    }
};

class Student : public Person
{
    public:
    void Me()
    {
        name();
        age();
        cout << "1119076" << endl;
    }
};

class Teacher : public Person
{
    public:
    void get() {Teach();}
};

int main()
{
    Student obj;
    obj.Me();
    Teacher obj1;
    obj1.get();
    return 0;
}