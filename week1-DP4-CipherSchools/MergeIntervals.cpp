#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    ans.push_back(intervals[0]);

    int index = 0;
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i][0] <= ans[index][1])
        {

            ans[index][1] = max(ans[index][1], intervals[i][1]);
            ans[index][0] = min(ans[index][0], intervals[i][0]);
        }
        else
        {
            ans.push_back(intervals[i]);
            index++;
        }
    }

    return ans;
}

signed main()
{

    return 0;
}