#include <bits/stdc++.h> // Using queue
using namespace std;

int main()
{
    ios::sync_with_stdio(0); // For TLE, (0) as False for Compatibilty
    cin.tie(0);

    int tt;
    cin >> tt;

    queue<long long> q_;

    while (tt--)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            long long n;
            cin >> n;
            q_.push(n);
        }
        else if (q == 2)
        {
            if (!q_.empty())
                q_.pop();
        }
        else
        {
            (!q_.empty()) ? cout << q_.front() << '\n' : cout << "Empty!\n";
        }
    }
    return 0;
}