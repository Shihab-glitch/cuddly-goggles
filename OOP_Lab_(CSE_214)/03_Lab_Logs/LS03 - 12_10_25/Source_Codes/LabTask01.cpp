#include <bits/stdc++.h>
using namespace std;

class Credit 
{
    public:
    int totCred = 20;
};

class Get : public Credit
{
    public:
    double Sum;
    void getCG()
    {
        double CG = Sum/totCred;
        cout << CG << endl;
    }
};

int main() 
{
    Get obj;
    cin >> obj.Sum;
    obj.getCG();
    return 0;
}