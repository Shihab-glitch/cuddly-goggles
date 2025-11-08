/**
 *   author   : Shihab-glitch
 *   created  : 07 17:01:33
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    
    int n, i, j, count;

    cin >> n;

    int arr[n], freq[n];

    for (i=0; i<n; ++i)
    {
        cin >> arr[i];
        freq[i] = -1;
    }

    for (i=0; i<n; ++i)
    {
        if(freq[i]!=0)
        {
            count = 1;
            for (j=(i+1); j<n; ++j)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    freq[j]=0;
                }
            }
            freq[i] = count;
        }
    }

    cout << "Element | Frequency" << '\n';

    for (i=0; i<n; ++i)
    {
        if (freq[i]!=0)
        {
            cout << "   " << arr[i] << "         " << freq[i] << '\n';
        }
    }
    
    return 0;
}