#include <bits/stdc++.h>
using namespace std;

int numSquares(int n) {
    vector<int> dp(n+1, n);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j*j <= i; j++) {
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }
    return dp[n];
}

int main() {
    int n;
    cin>> n;
    int result = numSquares(n);
    cout << "For n = " << n << ", the minimum number of perfect squares is " << result <<"\n";
    return 0;
}
