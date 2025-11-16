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

        vector<int> z(n);
        for (int i = 0; i < n; i++)
        {
            if (v[i] % k == 0)
            {
                z[i] = 0;
            }
            else
            {
                z[i] = k - (v[i] % k);
            }
        }

        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mini = min(mini, z[i]);
        }

        vector<int> f(n);
        int sum4 = 0;
        if (k == 4)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    f[i] = 0;
                }
                else
                {
                    f[i] = 2 - (v[i] % 2);
                }
            }
            sort(f.begin(), f.end());
        }
        if (k == 4)
        {
            sum4 = f[0] + f[1];
            mini = min(mini, sum4);
        }

        cout << mini << "\n";
    }

    return 0;
}