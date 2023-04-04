//DFS traversal in a binary tree in c++ program....

#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj_list[N];

void DFS(int node){
    cout<<node <<" ";
    visited[node] = 1;

    for(int adj_node : adj_list[node]){
        if(visited[adj_node] == 0){
            DFS(node);
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
    DFS(src);

return 0;
}

/*
0-----1-----2-----3
      |     |
      |     |
      |     |
      5-----4

connection:
node -> 6
edge -> 6

6 6
0 1
1 2
1 5
2 4
2 3
5 4

*/
