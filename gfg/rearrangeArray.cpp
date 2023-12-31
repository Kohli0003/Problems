class Solution
{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    // Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {
        int i = 0, j = n - 1;
        vector<long long> v;
        while (i <= j)
        {
            v.push_back(arr[j]);
            v.push_back(arr[i]);
            i++, j--;
        }
        for (int i = 0; i < v.size(); i++)
        {
            arr[i] = v[i];
        }
    }
};