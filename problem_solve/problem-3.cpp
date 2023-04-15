#include <bits/stdc++.h>
using namespace std;

const int N = 3000;
const long long INF = 1e18;

long long dist[N][N];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n, m, q;
  cin >> n >> m >> q;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      dist[i][j] = INF;
    }
  }

  for (int i = 0; i < m; i++) {
    int u, v;
    long long w;
    cin >> u >> v >> w;
    dist[u][v] = min(dist[u][v], w);
    dist[v][u] = min(dist[v][u], w);
  }

  for (int i = 1; i <= n; i++) {
    dist[i][i] = 0;
  }

  for (int k = 1; k <= n; k++) {
    for (int u = 1; u <= n; u++) {
      for (int v = 1; v <= n; v++) {
        dist[u][v] = min(dist[u][v], dist[u][k] + dist[k][v]);
      }
    }
  }

  for (int i = 0; i < q; i++) {
    int u, v;
    cin >> u >> v;
    if(dist[u][v] == INF)
      cout << -1 << "\n";
    else
      cout << dist[u][v] << "\n";
  }

  return 0;
}
