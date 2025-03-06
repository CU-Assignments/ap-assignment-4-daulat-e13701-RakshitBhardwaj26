#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count = 0;
        multiset<int> bst;
        for (int num : nums) {
            count += distance(bst.upper_bound(2LL * num), bst.end());
            bst.insert(num);
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 2, 3, 1};
    cout << sol.reversePairs(nums) << endl;
    return 0;
}
