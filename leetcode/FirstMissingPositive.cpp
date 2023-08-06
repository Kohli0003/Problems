class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        int x = nums.size();
        sort(nums.begin(), nums.end());
        int num = nums.front();

        cout << num;
    }
};