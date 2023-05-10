//frog-2 problem solve using dynamic programming memorization or recursive...

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 2e9;
int h[N];
int dp[N];
int n, k;

int ston(int n){
    dp[1] = 0;
    for(int i = 2; i <= n; i++){
        dp[i] = INF;
        for(int j = 1; j <= k; j++){
            if(i - j <= 0){
                break;
            }
            int candidate_ans = dp[i - j] + abs(h[i] - h[i - j]);
            dp[i] = min(dp[i], candidate_ans);
        }
    }
   
    return dp[n];
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