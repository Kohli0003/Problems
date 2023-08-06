class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> s;
        for (int i = 0; i < nums.size();)
        {
            if (nums[i] == nums[i + 1])
            {
                i++;
            }
            else
            {
                s.push_back(nums[i]);
            }
        }
        return s.size();
    }
};