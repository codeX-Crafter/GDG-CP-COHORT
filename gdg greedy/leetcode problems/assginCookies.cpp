class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int ans = 0;
        int n = g.size();
        int m = s.size();

        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        int j = 0;
        for (int i = 0; i < m; i++)
        {
            if (j >= n)
                break;
            if (s[i] >= g[j])
            {
                ans++;
                j++;
            }
        }
        return j;
    }
};