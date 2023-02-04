#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        int target = 0;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            target = nums[i];
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                // if(j!=i+1&&nums[j]==nums[j-1])
                // { j++;continue;}
                //  if(k!=n-1&&nums[k]==nums[k+1])
                // { k--;continue;}

                vector<int> v;
                if (target + nums[j] + nums[k] == 0)
                {
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    ans.push_back(v);
                    j++;
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                }

                else if (target + nums[j] + nums[k] < 0)
                    j++;
                else
                    k--;
            }
        }
        return ans;
    }
};

signed main()
{

    return 0;
}