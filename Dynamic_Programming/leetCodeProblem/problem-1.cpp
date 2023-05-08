#include <bits/stdc++.h>
using namespace std;

int dp[10001];

int solve(int n) {
    if (n == 0) return 0;
    if (dp[n] != -1) return dp[n];
    int ans = INT_MAX;
    for (int i = 1; i * i <= n; i++) {
        ans = min(ans, 1 + solve(n - i * i));
    }
    dp[n] = ans;
    return ans;
}

int numSquares(int n) {
    memset(dp, -1, sizeof(dp));
    return solve(n);
}

int main() {
    int n;
    cin >> n;
    cout << numSquares(n) << endl;
    return 0;
}
