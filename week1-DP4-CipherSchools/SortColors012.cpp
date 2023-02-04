#include <bits/stdc++.h>
using namespace std;
#define int long long

void sortColors(vector<int> &nums)
{
    int two = 0;
    int one = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 2)
            two++;
        if (nums[i] == 1)
            one++;
    }

    int index = 0;
    for (int i = 0; i < nums.size() - two - one; i++)
    {
        nums[index++] = 0;
    }
    for (int i = 0; i < one; i++)
    {
        nums[index++] = 1;
    }

    for (int i = 0; i < two; i++)
    {
        nums[index++] = 2;
    }
}

signed main()
{
    return 0;
}