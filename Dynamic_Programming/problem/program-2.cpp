//Tribonacci series solve using dynamic programinng tabulation in c++ program...

#include <bits/stdc++.h>
using namespace std;
int const N = 1001;
int dp[N];

int Tribonacci(int n){
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    int ans = Tribonacci(n);
    cout<< ans;

return 0;
}