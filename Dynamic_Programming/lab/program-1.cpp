//frog 1 problem in c++ solve...
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int h[N];
int dp[N];

int ston(int n){
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];

    int ans1 = ston(n - 1) + abs(h[n] - h[n - 1]);
    int ans2 = ston(n - 2) + abs(h[n] - h[n - 2]);
    int ans = min(ans1, ans2);
    dp[n] = ans;
    return ans;
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