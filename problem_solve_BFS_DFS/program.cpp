//Single Source Shortest Path (SSSP) problem solve... in unweighted graph

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e5;
int visited[N];
int level[N];
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
                level[adj_node] = level[head] + 1;
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

    for(int i = 0; i < edge; i++){
        cout<<"\n" <<"node " <<i <<" -> Level: " <<level[i] ;
    }


return 0;
}
