#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int start;
        int finish;
        cin >> start >> finish;
        v[i].first = finish;
        v[i].second = start;
    }
    sort(v.begin(), v.end());
    int finishTime = 0;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second >= finishTime)
        {
            num++;
            finishTime = v[i].first;
        }
    }
    cout << num << endl;

    return 0;
}