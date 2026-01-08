class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        int ans = n;

        vector<int> dup(n, 1);

        // 1 3 3 2 1
        // 1 2 1 1 1 left
        // 1 2 3 2 1 right

        for (int i = 0; i < n; i++)
        {
            if (((i - 1) >= 0 && ratings[i - 1] < ratings[i]))
            {
                dup[i] = dup[i - 1] + 1;
            }
        }
        for (int i = n - 1; i >= 0; i--)
            if (((i - 1) >= 0 && ratings[i - 1] > ratings[i]))
            {
                if (dup[i - 1] <= dup[i])
                    dup[i - 1] = dup[i] + 1;
            }

        ans = accumulate(dup.begin(), dup.end(), 0);

        return ans;
    }
};