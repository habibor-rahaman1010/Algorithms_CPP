#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int n, ax, ay, bx, by, cx, cy, vis[N][N];
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1}, dy[] = {1, -1, 0, 0, 1, -1, -1, 1};

bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= n && !vis[x][y];
}

bool bfs() {
    queue<pair<int, int>> q;
    q.push({bx, by});
    vis[bx][by] = true;

    while(!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();

        if(x == cx && y == cy) return true;

        for(int i = 0; i < 8; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if(valid(nx, ny)) {
                if(nx == ax || ny == ay || abs(nx - ax) == abs(ny - ay)) continue;
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    if(bfs()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
