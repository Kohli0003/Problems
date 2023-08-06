class Solution
{
public:
    int passThePillow(int n, int time)
    {
        if (n == time)
        {
            return n - 1;
        }
        int pos = 1;
        if (time > n)
        {
            int rounds = time / (n - 1);
            if (rounds % 2 == 0)
            {
                return 1 + time - rounds * (n - 1);
            }
            else
            {
                return n - (time - rounds * (n - 1));
            }
        }
        for (int i = 1; i <= time; i++)
        {
            pos++;
        }
        return pos;
    }
};