#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int MAXN = 1000;

int n;
vector<vector<char>> grid(MAXN+1, vector<char>(MAXN+1));
vector<vector<int>> memo(MAXN+1, vector<int>(MAXN+1, -1));

int countPaths(int i, int j) {
    if (i < 1 || i > n || j < 1 || j > n || grid[i][j] == '*') {
        return 0;
    }
    if (i == 1 && j == 1) {
        return 1;
    }
    if (memo[i][j] != -1) {
        return memo[i][j];
    }
    int ans = (countPaths(i-1,j) + countPaths(i,j-1)) % MOD;
    memo[i][j] = ans;
    return ans;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }
    cout << countPaths(n,n) << endl;
    return 0;
}
