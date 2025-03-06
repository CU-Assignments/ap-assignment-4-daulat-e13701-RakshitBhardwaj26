#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        for (int num : nums) {
            auto it = lower_bound(lis.begin(), lis.end(), num);
            if (it == lis.end()) lis.push_back(num);
            else *it = num;
        }
        return lis.size();
    }
};

int main() {
    Solution sol;
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << sol.lengthOfLIS(nums) << endl;
    return 0;
}
