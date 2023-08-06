class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int size = flowerbed.size();
        int i = 0;
        while (i < size - 1)
        {
            if (!flowerbed[i] && !flowerbed[i + 1])
            {
                n--;
                i += 2;
            }
            else if (flowerbed[i] == 1)
            {
                i += 2;
            }
            else
            {
                i += 3;
            }
        }
        if (i < size && flowerbed[i] == 0)
        {
            n--;
        }
        if (n <= 0)
        {
            return true;
        }
        return false;
    }
};