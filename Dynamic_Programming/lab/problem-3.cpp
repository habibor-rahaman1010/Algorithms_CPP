//frog-2 problem solve using dynamic programming memorization or recursive...

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 2e9;
int h[N];
int dp[N];
int n, k;

int ston(int n){
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];

    int ans = INF;
    for(int i = 1; i <= k; i++){
        if(n - i <= 0){
            break;
        }
        int candidate_ans = ston(n - i) + abs(h[n] - h[n - i]);
        ans = min(ans, candidate_ans);
    }
    return dp[n] = ans;
}

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin>> h[i];
    }
    memset(dp, -1, sizeof(dp));
    int result = ston(n);
    cout <<"Minimmub value is: " << result <<"\n";

return 0;
}