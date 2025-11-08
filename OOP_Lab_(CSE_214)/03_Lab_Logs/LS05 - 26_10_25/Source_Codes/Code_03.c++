#include <bits/stdc++.h> // Friend Function
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

class OOP{
    private:
         int a=10;
    public:
        friend void print(OOP ob);
};

void print(OOP ob){
    cout << ob.a <<"\n";
}


int main() {
    fast_io;
    
    OOP ob;
    print(ob);
    return 0;
}