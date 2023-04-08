//flood fill problem solving using BFS in c++ program...

//maze traversal in a grid with Single Source Shortest Path (SSSP) in c++ program...

#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

const int N = 2001;
int n, m;
int maze[N][N];
int visited[N][N];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pair<int, int>coordinat){
    int x = coordinat.first;
    int y = coordinat.second;
    if(x >= 0 && x < n && y >= 0 && y < m){
        return true;
    }
    return false;
}

bool is_save(pair<int, int>coordinat){
    int x = coordinat.first;
    int y = coordinat.second;
    if(maze[x][y] == -1){
        return false;
    }
    return true;
}

bool is_visited(pair<int, int>coordinat){
    int x = coordinat.first;
    int y = coordinat.second;
    if(visited[x][y] == 0){
        return true;
    }
    return false;
}

void BFS(pair<int, int>src){
    queue<pair<int, int>>q;
    visited[src.first][src.second];
    q.push(src);

    while(!q.empty()){
        pair<int, int>head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;

        for(int i = 0; i < 4; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            pair<int, int>adj_node = {new_x, new_y};
            if(is_inside(adj_node) && is_save(adj_node) && is_visited(adj_node)){
                visited[new_x][new_y] = 1;
                q.push(adj_node);
            }
        }
    }
}

pair<int, int>find_unvisited(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(visited[i][j] == 0 && maze[i][j] == 0){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main() {
    cin>>n >>m;

    for(int i = 0; i < n; i++){
       string input;
       cin>> input;
       for(int j = 0; j < m; j++){
            if(input[j] == '#'){
                maze[i][j] = -1;
            }
       }
    }

    int room_count = 0;
    while(true){
        pair<int, int>unvisited_position = find_unvisited();
        if(unvisited_position == pair<int, int>(-1, -1)){
            break;
        }
        BFS(unvisited_position);
        room_count++;
    }

    cout<<"room count: "<<room_count <<"\n";
return 0;
}

/*
5 8
########
#..#...#
####.#.#
#..#...#
########
*/

