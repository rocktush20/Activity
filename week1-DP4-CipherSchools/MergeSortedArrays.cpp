#include <bits/stdc++.h>
using namespace std;
#define int long long

void merge(vector<int> &num1, int m, vector<int> &num2, int n)
{

    for (int j = m; j < m + n; j++)
    {
        num1[j] = num2[j - m];
    }

    int gap = ceil((m + n) / 2.0);
    cout << gap;
    while (gap > 0)
    {
        for (int i = gap; i < m + n; i++)
        {
            if (num1[i - gap] > num1[i])
            {
                swap(num1[i - gap], num1[i]);
            }
        }
        if (gap == 1)
            gap = 0;
        else
            gap = ceil(gap / 2.0);
    }
}

signed main()
{
    return 0;
}