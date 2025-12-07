#include <bits/stdc++.h> // From Basic Structure
using namespace std;

const int CAPACITY = 1000005;

long long cq[CAPACITY];
int front = 0, rear = -1, countItems = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            long long n;
            cin >> n;
            if (countItems < CAPACITY)
            {
                rear = (rear + 1) % CAPACITY;
                cq[rear] = n;
                countItems++;
            }
        }
        else if (q == 2)
        {
            if (countItems > 0)
            {
                front = (front + 1) % CAPACITY;
                countItems--;
            }
        }
        else
            (countItems == 0) ? cout << "Empty!\n" : cout << cq[front] << '\n';
    }

    return 0;
}