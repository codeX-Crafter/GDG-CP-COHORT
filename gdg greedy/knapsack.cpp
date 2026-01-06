#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(const pair<double, pair<double, int>> &a,
         const pair<double, pair<double, int>> &b)
{
    return a.first > b.first;
}

signed main()
{
    int n;
    cin >> n;

    double capacity;
    cin >> capacity;

    vector<pair<double, pair<double, int>>> v(n);

    for (int i = 0; i < n; i++)
    {
        int profit, w;
        cin >> profit >> w;

        v[i].second.first = profit;
        v[i].second.second = w;
        v[i].first = (double)profit / w;
    }

    sort(v.begin(), v.end(), cmp);

    double maxProfit = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (capacity <= 0)
            break;

        double profit = v[i].second.first;
        int w = v[i].second.second;

        if (w > capacity)
        {
            maxProfit += profit * (capacity / w);
            capacity = 0;
        }
        else
        {
            maxProfit += profit;
            capacity -= w;
        }
    }

    cout << maxProfit << endl;
    return 0;
}
