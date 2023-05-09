//solve the fobonacci problem use memorozation in c++ program...

#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
int dp[N];

int fibo(int n){
    if(n <= 2) return 1;
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    int ans = fibo(n);
    cout << ans;

return 0;
}