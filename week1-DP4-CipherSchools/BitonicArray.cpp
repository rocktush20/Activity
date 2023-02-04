#include <bits/stdc++.h>
using namespace std;
#define int long long

int findMaximum(int arr[], int n)
{

    int max = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {

            max = arr[i];
        }
        else
        {

            continue;
        }
    }

    return max;
}

signed main()
{
    return 0;
}