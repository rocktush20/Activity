#include <bits/stdc++.h>
using namespace std;
#define int long long

int minInsertions(string s)
{
    int res = 0, right = 0;
    for (char &c : s)
    {
        if (c == '(')
        {
            if (right % 2 > 0)
            {
                right--;
                res++;
            }
            right += 2;
        }
        else
        {
            right--;
            if (right < 0)
            {
                right += 2;
                res++;
            }
        }
    }
    return right + res;
}

signed main()
{
    return 0;
}