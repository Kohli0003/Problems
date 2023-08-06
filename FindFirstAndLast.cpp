class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> s;
        vector<int> g;
        bool flag = false;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                s.push_back(i);
                flag = true;
            }
        }
        if (flag == false)
        {
            s.push_back(-1);
            s.push_back(-1);
        }
        if (s.size() == 1)
        {
            s.push_back(s.front());
        }
        if (s.size() > 2)
        {
            g.push_back(s.front());
            g.push_back(s.back());
            return g;
        }
        return s;
    }
};