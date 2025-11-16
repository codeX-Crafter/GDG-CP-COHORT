#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 1000000;
vector<bool> prime(MAXN + 1, true);

void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAXN; i++)
        if (prime[i])
            for (int j = i * i; j <= MAXN; j += i)
                prime[j] = false;
}

signed main()
{
    sieve();

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    for (int x : a)
    {
        int y = sqrt(x);
        if (y * y == x && prime[y])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
