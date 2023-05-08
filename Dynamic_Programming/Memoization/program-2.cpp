#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
int dp[N];

int fib(int n){
    if(n <= 2) return 1;
    if(dp[n] != -1){
        return dp[n];
    }
    int ans = fib(n - 1) + fib(n - 2);
    dp[ans];
    return ans;
}

int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp)); // makrs all state as unvisited...
    int ans = fib(n);
    cout << ans;

return 0;
}