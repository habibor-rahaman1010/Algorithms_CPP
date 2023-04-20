//Memoization technic use in fibonacci series calculate in c++ programe...

#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
int dp[N];

int fib(int n){
    if(n <= 2){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int ans = fib(n - 1) + fib(n - 2);
    dp[n] = ans;
    return ans;
    
}

int main() {
    int n;
    cout <<"Enter the value of n: ";
    cin >> n;

    for(int i  = 1; i <= n; i++){
        dp[i] = -1;
    }

    int ans = fib(n);
    cout<<ans <<"\n";

return 0;
}