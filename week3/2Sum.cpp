#include <bits/stdc++.h>
using namespace std;
#define int long long

// O(N sqrt)

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

        bool possible = false;

        vector<int> ans(2);

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] + v[j] == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                    possible = true;
                    break;
                }
            }
            if (possible)
                break;
        }

        if (possible)
        {
            cout << "YES\n";
            cout << ans[0] << " " << ans[1] << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}