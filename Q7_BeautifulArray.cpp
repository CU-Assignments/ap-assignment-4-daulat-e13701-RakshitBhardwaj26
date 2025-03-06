#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> res = {1};
        while (res.size() < n) {
            vector<int> temp;
            for (int num : res) if (num * 2 - 1 <= n) temp.push_back(num * 2 - 1);
            for (int num : res) if (num * 2 <= n) temp.push_back(num * 2);
            res = temp;
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> res = sol.beautifulArray(5);
    for (int num : res) cout << num << " ";
    cout << endl;
    return 0;
}
