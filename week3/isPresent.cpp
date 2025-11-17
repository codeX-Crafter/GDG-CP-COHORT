#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int target;
        cin >> target;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool isPresent = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == target)
            {
                isPresent = true;
                break;
            }
        }
        if (isPresent)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}