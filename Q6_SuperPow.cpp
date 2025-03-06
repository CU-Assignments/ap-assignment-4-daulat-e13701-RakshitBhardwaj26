#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int modPow(int a, int b, int mod) {
        int res = 1;
        a %= mod;
        while (b) {
            if (b % 2) res = (res * a) % mod;
            a = (a * a) % mod;
            b /= 2;
        }
        return res;
    }

    int superPow(int a, vector<int>& b) {
        int res = 1, mod = 1337;
        for (int digit : b) {
            res = modPow(res, 10, mod) * modPow(a, digit, mod) % mod;
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> b = {1, 0};
    cout << sol.superPow(2, b) << endl;
    return 0;
}
