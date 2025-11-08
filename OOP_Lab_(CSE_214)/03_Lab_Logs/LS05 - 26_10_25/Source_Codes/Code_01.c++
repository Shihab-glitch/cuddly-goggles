#include <bits/stdc++.h> // Call by Ref & Call by Value
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int up(int x){
    x = 50;
    return x;
}

void down(int *x){
    *x -= 1;
}


int main() {
    fast_io;
    
    int num = 5, num1 = 6;
    num = up(num);
    cout << num << "\n";
    down(&num1);
    cout << num1 << "\n";

    return 0;
}