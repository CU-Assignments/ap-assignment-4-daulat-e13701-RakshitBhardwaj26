#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int, int>> events;
        for (auto& b : buildings) {
            events.emplace_back(b[0], -b[2]);
            events.emplace_back(b[1], b[2]);
        }
        sort(events.begin(), events.end());

        multiset<int> heights = {0};
        vector<vector<int>> res;
        int prev = 0;
        for (auto [x, h] : events) {
            if (h < 0) heights.insert(-h);
            else heights.erase(heights.find(h));
            int maxH = *heights.rbegin();
            if (maxH != prev) {
                res.push_back({x, maxH});
                prev = maxH;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> buildings = {{2, 9, 10}, {3, 7, 15}, {5, 12, 12}};
    vector<vector<int>> res = sol.getSkyline(buildings);
    for (auto& v : res) cout << "[" << v[0] << ", " << v[1] << "] ";
    cout << endl;
    return 0;
}
