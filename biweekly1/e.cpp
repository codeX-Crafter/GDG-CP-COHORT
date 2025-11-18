#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % k == 0)
                mini = 0;
            else
                mini = min(mini, (k - (v[i] % k)));
        }

        int evencnt = 0;
        int ans = 0;
        if (k == 4)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    evencnt++;
                }
            }
            if (evencnt >= 2)
            {
                ans = 0;
            }
            else if (evencnt == 1)
            {
                ans = 1;
            }
            else if (evencnt == 0)
            {
                ans = 2;
            }
            mini = min(ans, mini);
        }

        cout << mini << "\n";
    }

    return 0;
}