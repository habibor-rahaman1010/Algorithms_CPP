//frog 1 problem in c++ solve... use Tavulation...
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int h[N];
int dp[N];

int ston(int n){
    dp[1] = 0;

    for(int i = 2; i <= n; i++){
        int ans1 = dp[i - 1] + abs(h[i] - h[i - 1]);
        if(i == 2){
            dp[i] = ans1;
            continue;
        }
        int ans2 = dp[i - 2] + abs(h[i] - h[i - 2]);
        dp[i] = min(ans1, ans2);
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> h[i];
    }  
    memset(dp, -1, sizeof(dp));
    int ans =  ston(n);
    cout << ans;

return 0;
}