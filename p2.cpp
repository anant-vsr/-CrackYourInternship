#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int l = 0, m = 0, h = nums.size() - 1;
        while (m <= h)
        {
            if (nums[m] == 0)
            {
                int t = nums[m];
                nums[m] = nums[l];
                nums[l] = t;
                l++;
                m++;
            }
            else if (nums[m] == 2)
            {
                int t = nums[m];
                nums[m] = nums[h];
                nums[h] = t;
                h--;
            }
            else
                m++;
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    for (auto &i : nums)
        cin >> i;
    s.sortColors(nums);
}