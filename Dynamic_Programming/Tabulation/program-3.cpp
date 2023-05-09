//solve the fobonacci problem use tabulation in c++ program...

#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
int dp[N];

int fibo(int n){
    dp[1] = 1;
    dp[2] = 1;

    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    int ans = fibo(n);
    cout << ans;

return 0;
}