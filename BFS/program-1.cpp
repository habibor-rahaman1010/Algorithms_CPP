//BFS implement in a graph or tree in c++ program...

#include <iostream>
#include <queue>
using namespace std;

const int N = 100000;
int visited[N];
vector<int>adjList[N];

void BFS(int node){
    queue<int>q;
    visited[node] = 1;
    q.push(node);

    while(!q.empty()){
        int head = q.front();
        q.pop();
        cout<<head <<" ";

        for(int adj_node: adjList[head]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
                q.push(adj_node);
            }
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
    BFS(src);

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

6 6

0 1
2 3
1 5
2 4
5 4
1 2

*/

