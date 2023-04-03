#include <iostream>
#include <vector>

using namespace std;

bool hasCycle(int u, vector<vector<int>>& adj, vector<int>& visited, vector<int>& path) {
    visited[u] = 1;
    path[u] = 1;

    for (int v : adj[u]) {
        if (!visited[v] && hasCycle(v, adj, visited, path)) {
            return true;
        } else if (path[v]) {
            return true;
        }
    }

    path[u] = 0;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> visited(n), path(n);
    for (int i = 0; i < n; i++) {
        if (!visited[i] && hasCycle(i, adj, visited, path)) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}

