#include <bits/stdc++.h>
using namespace std;
#define int long long

//{9,0},(5,1),{2,2},{7,3}
//{2,2},{5,1},{7,3},{9,0}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        bool possible = false;

        vector<int> ans(2);
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            int sum = v[l].first + v[r].first;
            if (sum == target)
            {
                possible = true;
                ans[0] = v[l].second;
                ans[1] = v[r].second;
                break;
            }
            else if (sum > target)
            {
                r--;
            }
            else if (sum < target)
            {
                l++;
            }
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