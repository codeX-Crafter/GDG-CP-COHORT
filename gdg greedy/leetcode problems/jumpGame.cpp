class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int req = 1;
        int n = nums.size();
        bool ans = true;
        // 2nd last index : n-2
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < req)
            {
                ans = false;
                req++;
            }
            else
            {
                req = 1;
                ans = true;
            }
        }
        return ans;
    }
};