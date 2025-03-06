#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int right = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
        if (left <= right) return {left, right};
        return {-1, -1};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> res = sol.searchRange(nums, target);
    cout << "[" << res[0] << ", " << res[1] << "]";
    return 0;
}
