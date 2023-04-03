#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
        vector<int> row(n);
        for (int j = 0; j < n; j++) {
            cin >> row[j];
            if (row[j] == 1) {
                adj[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
