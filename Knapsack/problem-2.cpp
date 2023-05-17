//problem link - https://atcoder.jp/contests/dp/tasks/dp_d
//the problem solve using DP tabulation in this problem...

#include <bits/stdc++.h>
using namespace std;

const int N = 102;
const int M = 1e5 + 5;
long long dp[N][M];
int waight[N], value[N];

int main(){
    int n, w;
    cin>> n >> w;
    for(int i = 1; i <= n; i++){
        cin >> waight[i] >> value [i];
    }

    //handle base case...
    memset(dp, 0, sizeof(dp));

    //loop over the sates...
    for(int i = 1; i <= n; i++){
        for(int cap = 0; cap <= w; cap++){
            // calculate the result from smaller sub problem...
            if(cap < waight[i]){
                dp[i][cap] = dp[i - 1][cap];
            }
            else {
                dp[i][cap] = max(
                    value[i] + dp[i - 1][cap - waight[i]],
                    dp[i - 1][cap]
                );
            }
        }
    }
    cout << dp[n][w] << "\n";

return 0;
}