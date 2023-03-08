//Adjacency List in graph theory in c++ program...
//graph is directed and wighted...

#include <iostream>
#include <vector>
using namespace std;

/*
    0----1
        / \
      2----3

          2
      0 ------> 1

          4
      1 ------> 2

          8
      3 ------> 2

          7
      3 ------> 1

      0-> (1, 2)
      1-> (2, 4)
      2-> 
      3-> (2, 8) (1, 7)
*/

int main(){
    int node = 4;
    vector<pair<int, int>>adj_list[node];
    //adj_list[0].push_back(pair<int, int>(1, 2));
    adj_list[0].push_back({1, 2});
    adj_list[1].push_back({2, 4});
    adj_list[3].push_back({2, 8});
    adj_list[3].push_back({1, 7});

    for(int i = 0; i < node; i++){
        cout<<i <<" -> ";
        for(int j = 0; j < adj_list[i].size(); j++){
            cout<<"("<<adj_list[i][j].first <<" " <<adj_list[i][j].second <<")";
        }
        cout<<"\n";
    }

return 0;
}