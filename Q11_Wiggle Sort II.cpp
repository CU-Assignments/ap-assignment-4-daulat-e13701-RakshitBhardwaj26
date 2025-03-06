#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        int n = nums.size(), j = (n - 1) / 2, k = n - 1;
        for (int i = 0; i < n; i++) 
            nums[i] = sorted[i % 2 == 0 ? j-- : k--];
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 5, 1, 1, 6, 4};
    sol.wiggleSort(nums);
    for (int num : nums) cout << num << " ";
    return 0;
}
