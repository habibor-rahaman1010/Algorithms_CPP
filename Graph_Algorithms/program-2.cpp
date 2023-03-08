//Adjacency List in graph theory in c++ program...

#include <iostream>
#include <vector>
using namespace std;

/*
    0----1
        / \
      2----3

      0 -> {1}
      1 -> {0, 2, 3}
      2 -> {1, 3}
      3 -> {1, 2}
*/

int main(){
    int node = 4;
    vector<int>adj_list[node];
    adj_list[0] = {1};
    adj_list[1] = {0, 1, 3};
    adj_list[2] = {1, 3};
    adj_list[3] = {1, 2};

    for(int i = 0; i < node; i++){
        cout<<i <<" -> ";
        for(int j = 0; j < adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<"\n";
    }

return 0;
}