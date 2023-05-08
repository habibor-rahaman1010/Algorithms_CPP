#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int n, ax, ay, bx, by, cx, cy;
bool under_attack[MAXN][MAXN], visited[MAXN][MAXN];

bool dfs(int x, int y) {
    if (x == cx && y == cy) return true;
    visited[x][y] = true;
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) continue;
            int nx = x + dx, ny = y + dy;
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !under_attack[nx][ny] && !visited[nx][ny]) {
                if (dfs(nx, ny)) return true;
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    // mark cells under attack by the queen
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == ax || j == ay || i-j == ax-ay || i+j == ax+ay) {
                under_attack[i][j] = true;
            }
        }
    }
    if (dfs(bx, by)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
