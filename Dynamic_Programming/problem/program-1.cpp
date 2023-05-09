//Tribonacci series solve using dynamic programinng memorization or recursive in c++

#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
int dp[N];

int Tribonacci(int n) {
    if(n <= 3) return 1;
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = Tribonacci(n - 1) + Tribonacci(n - 2) + Tribonacci(n - 3);
}

int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    int ans = Tribonacci(n);
    cout << ans;

return 0;
}