class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int n = bills.size();
        int balance = 0;
        vector<int> cash(3);
        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            if (bills[i] == 5)
            {
                cash[0]++;
            }
            else if (bills[i] == 10)
            {
                if (cash[0])
                    cash[0]--;
                else
                    break;
                cash[1]++;
            }
            else
            {
                if ((cash[0] >= 1 && cash[1] >= 1))
                {
                    cash[1]--;
                    cash[0]--;
                }
                else if (cash[0] >= 3)
                {
                    cash[0] -= 3;
                }
                else
                {
                    break;
                }
                cash[2]++;
            }
            if (i == n - 1)
                ans = true;
        }
        return ans;
    }
};