#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const long long INF = 1e18;
vector<pair<int, int>>adj_list[N];
long long d[N];
int visited[N];
int parent[N];
int nodes, edges;


void dijkstra(int src){
    for(int i = 1; i <= nodes; i++){
        d[i] = INF;
    }
    d[src] = 0;

    priority_queue<pair<long long, int>>pq;
    pq.push({0, src});

    while(!pq.empty()){
        pair<long long, int> head = pq.top();
        pq.pop();
        int selected_node = head.second;
        if(visited[selected_node]){
            continue;
        }
        visited[selected_node] = 1;

        for(auto adj_entry : adj_list[selected_node]){
            int adj_node = adj_entry.first;
            int edge_cost = adj_entry.second;
            if(d[selected_node] + edge_cost < d[adj_node]){
                d[adj_node] = d[selected_node] + edge_cost;
                parent[adj_node] = selected_node;
                pq.push({-1 * d[adj_node], adj_node});
            }
        }
    }
}

int main() {
    cin>> nodes >>edges;
    for(int i = 0; i < edges; i++){
        int u, v, w;
        cin>>u >>v >>w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    int src = 1;
    dijkstra(src);

    if(visited[nodes] == 0){
        cout<<-1 <<"\n";
    }

    int current_node = nodes;
    vector<int>path;
    while(true){
        path.push_back(current_node);
        if(current_node == src){
            break;
        }
        current_node = parent[current_node];
    }
    reverse(path.begin(), path.end());

    for(int node : path){
        cout<<node <<" ";
    }
    cout<<"\n";

return 0;
}