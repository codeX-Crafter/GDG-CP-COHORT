class Solution
{
public:
    bool checkValidString(string s)
    {
        int n = s.size();
        int mini = 0;
        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                mini--;
                maxi++;
            }
            if (s[i] == '(')
            {
                mini++;
                maxi++;
            }
            if (s[i] == ')')
            {
                mini--;
                maxi--;
            }
            if (maxi < 0)
                return false;
            if (mini < 0)
                mini = 0;
        }
        return (mini == 0);
    }
};