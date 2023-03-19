//DFS implement in a graph or tree in c++ program...

#include <iostream>
#include <vector>
using namespace std;

const int N = 100000;
int visited[N];
vector<int>adjList[N];

void DFS(int node){
    cout<<node <<" ";
    visited[node] = 1;

    for(int adj_node : adjList[node]){
        if(visited[adj_node] == 0){
            DFS(adj_node);
        }
    }
}

int main(){
    int node, edge;
    cin>>node >>edge;

    for(int i = 0; i < edge; i++){
        int u, v;
        cin>>u >>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int src = 0;
    DFS(src);

return 0;
}

/*
input parameter

6 5

0 1
2 3
1 5
2 4
5 4

*/
