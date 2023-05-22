#include <bits/stdc++.h>
using namespace std;
int maxChocolates(int N, int W, const vector<int>& chocolates, const vector<int>& weights){
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (weights[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], chocolates[i - 1] + dp[i][j - weights[i - 1]]);
            }
        }
    }

    return dp[N][W];
}

int main(){
    int N, W;
    cin >> N >> W;

    vector<int> chocolates(N);
    vector<int> weights(N);

    for (int i = 0; i < N; i++){
        cin >> chocolates[i];
    }

    for (int i = 0; i < N; i++){
        cin >> weights[i];
    }

    int maxNumChocolates = maxChocolates(N, W, chocolates, weights);
    cout << maxNumChocolates;

    return 0;
}