#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1])
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,1,3,5,6,4};
    cout << sol.findPeakElement(nums) << endl;
    return 0;
}
