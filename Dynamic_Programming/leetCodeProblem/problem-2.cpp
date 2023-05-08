#include <bits/stdc++.h>
using namespace std;

int robHelper(vector<int>& nums, int start, int end, vector<int>& dp) {
    if (start > end) return 0;
    if (dp[start] != -1) return dp[start];
    dp[start] = max(nums[start] + robHelper(nums, start + 2, end, dp), robHelper(nums, start + 1, end, dp));
    return dp[start];
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    vector<int> dp(n, -1);
    int max1 = robHelper(nums, 0, n - 2, dp);
    fill(dp.begin(), dp.end(), -1);
    int max2 = robHelper(nums, 1, n - 1, dp);
    return max(max1, max2);
}

int main() {
    vector<int> nums = {2, 3, 2};
    cout << rob(nums) << endl;
    return 0;
}
