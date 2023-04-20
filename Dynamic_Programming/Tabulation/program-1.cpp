//Memoization technic use in fibonacci series calculate in c++ programe...

#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
int dp[N];

int main() {
    int n;
    cout <<"Enter the value of n: ";
    cin >> n;

    //base case
    dp[1] = 1;
    dp[2] = 1;

    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout<<dp[n];


return 0;
}