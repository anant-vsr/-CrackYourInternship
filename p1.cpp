#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int n = nums.size() - 1;
        vector<int> v(n + 1, 0);
        for (int i = 0; i <= n; i++)
        {
            v[nums[i]] += 1;
        }
        for (int i = 0; i <= n; i++)
        {

            if (v[i] > 1)
                return i;
        }
        return 0;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    for (auto &i : nums)
        cin >> i;
    cout << s.findDuplicate(nums) << endl;
}