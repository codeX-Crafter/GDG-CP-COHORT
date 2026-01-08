bool cmp(vector<int> &a, vector<int> &b) { return a[1] < b[1]; }

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        // activity selection problem jaise h, do remember
        int answer = 0;

        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);
        int ans = 1;
        int finish = intervals[0][1];
        for (int i = 1; i < n; i++)
        {
            if (finish <= intervals[i][0])
            {
                ans++;
                finish = intervals[i][1];
            }
        }

        answer = (n - ans);
        return answer;
    }
};