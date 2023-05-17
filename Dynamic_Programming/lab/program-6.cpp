//problem solving using DP with 2 dimension use recursion 

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int happines[N][4];
int dp[N][4];

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            cin >> happines[i][j];
        }
    }

    //handle basecase
    for(int task = 1; task <= 3; task++){
        dp[1][task] = happines[1][task];
    }

    //loop over the states...
    for(int day = 1; day <= n; day++){
        for(int current_task = 1; current_task <= 3; current_task++){
            int max_profit = 0;
            for(int last_task = 1; last_task <= 3; last_task++){
                if(last_task != current_task){
                int current_profit = dp[day - 1][last_task] + happines[day][current_task];
                max_profit = max(max_profit, current_profit);
                }
            }
            dp[day][current_task] = max_profit;
        }
    }
    int ans = max({dp[n][1], dp[n][2], dp[n][3]});
    cout <<ans <<"\n";

return 0;
}
