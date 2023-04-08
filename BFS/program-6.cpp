//implement BFS on a graph in c++ program...

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int>adj_list[N];

void BFS(int node){
    queue<int>q;
    visited[node] = 1;
    q.push(node);

    while(!q.empty()){
        int head = q.front();
        q.pop();
        cout<<head <<" ";
        for(int adj_node : adj_list[head]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main() {
    int node, edge;
    cin>>node >>edge;

    for(int i = 0; i < edge; i++){
        int u, v;
        cin>>u >>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 0;
    BFS(src);

return 0;
}
/*
0 1
0 2
2 4
2 5
1 6
6 7
6 8
6 9
7 0
8 0
5 0
4 0
9 10
10 8

ans: 0 1 2 7 8 5 4 6 10 9
*/
