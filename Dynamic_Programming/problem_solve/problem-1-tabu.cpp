#include <bits/stdc++.h>
using namespace std;

const int N = 30;
int dp[N];

class Solution {
public:
    int fib(int n) {
      dp[1] = 0;
      dp[1] = 1;
      dp[2] = 1;

      for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
      }

      return dp[n];
    }
};

int main () {
  Solution s;
  cout << s.fib(8) << "\n";
  return 0;
}