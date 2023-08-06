class Solution
{
public:
    double myPow(double x, int n)
    {
        double num = x;
        int count = 1;
        while (count != n)
        {
            num = num * num;
            count++;
        }
        return num;
    }
};