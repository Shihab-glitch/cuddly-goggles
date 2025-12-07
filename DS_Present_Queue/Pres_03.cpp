#include <bits/stdc++.h> // Using Deque
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;

    deque<long long> dq;

    while (tt--)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            long long n;
            cin >> n;
            dq.push_back(n);
        }
        else if (q == 2)
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else
        {
            if (!dq.empty())
                cout << dq.front() << '\n';
            else
                cout << "Empty!\n";
        }
    }

    return 0;
}