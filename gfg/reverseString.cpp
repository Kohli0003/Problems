

// User function Template for C++

string reverseWord(string str)
{

    string B;
    int i;
    for (i = str.length() - 1; i >= 0; i--)
    {
        B += str.at(i);
    }
    return B;
}