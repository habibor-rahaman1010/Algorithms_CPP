#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int INF = 1e9;
vector<pair<int, int>>adj_list[N];
int d[N];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        d[i] = INF;
    }

    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }

return 0;
}