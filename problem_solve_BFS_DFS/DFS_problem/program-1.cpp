//Graph Coloring in Code problem solve using DFS in c++ code...
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_list[N];
int visited[N];
int color[N];

bool DFS(int node){
    visited[node] = 1;

    for(int adj_node : adj_list[node]){
        if(visited[adj_node] == 0){
            if(color[node] == 1){
                color[adj_node] = 2;
            }
            else{
                color[adj_node] = 1;
            }
           bool is_bicolorable = DFS(adj_node);
           if(!is_bicolorable){
                return false;
           }
        }
        else{
            if(color[node] == color[adj_node]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int node, edge;
    cin>>node >>edge;

    for(int i = 0; i < edge; i++){
        int u, v;
        cin>>u >>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bool is_bicolorale = true;
    for(int i = 1; i <= node; i++){
       if(visited[i] == 0){
            color[i] = 1;
            bool ok = DFS(i);
            if(!ok){
                is_bicolorale = false;
                break;
            }
       }
    }

    if(!is_bicolorale){
        cout<<"Impossible" <<"\n";
    }
    else{
        for(int i = 1; i <= node; i++){
            cout<< color[i] <<" ";
        }
        cout<<"\n";
    }

return 0;
}
