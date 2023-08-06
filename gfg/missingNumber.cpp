
class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans += array[i];
        }
        return n * (n + 1) / 2 - ans;
    }
};