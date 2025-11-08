#include <bits/stdc++.h> // Declaring function outside Class
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

class OOP{
    public:
     void print();
};

void OOP::print(){
    cout << "Hello" << "\n";
}

int main() {
    fast_io;
    
    OOP ob;
    ob.print();

    return 0;
}