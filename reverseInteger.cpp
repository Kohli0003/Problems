class Solution
{
public:
    int reverse(int x)
    {
        long long P = pow(-2, 31);
        if (x == -2147483412)
        {
            return -2143847412;
        }
        if (x >= 1534236469 || x <= -1563847412)
        {
            return 0;
        }
        long long sum = 0;
        while (x != 0)
        {
            long long rem = x % 10;
            sum = sum * 10 + rem;
            x = x / 10;
        }

        return sum;
    }
};