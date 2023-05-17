//problem link - https://atcoder.jp/contests/dp/tasks/dp_d
//the problem solve using DP memorization in this problem...

#include <bits/stdc++.h>
using namespace std;

const int N = 102;
const int M = 1e5 + 5;
long long dp[N][M];
int waight[N], value[N];

long long knapsack(int n, int cap){
    //base case 
    if(n == 0){
        return 0;
    }

    //if result alredy calculated return the result...
    if(dp[n][cap] != -1){
        return dp[n][cap];
    }
    if(cap < waight[n]){
        int ans = knapsack(n - 1, cap);
        dp[n][cap] = ans;
        return ans;
    }
    int ans1 = value[n] + knapsack(n - 1, cap - waight[n]);
    int ans2 = knapsack(n - 1, cap);
    int ans = max(ans1, ans2);
    dp[n][cap] = ans;
    return ans;
}

int main(){
    int n, cap;
    cin>> n >> cap;
    for(int i = 1; i <= n; i++){
        cin >> waight[i] >> value [i];
    }

    memset(dp, -1, sizeof(dp));

    cout << knapsack(n, cap) << "\n";

return 0;
}