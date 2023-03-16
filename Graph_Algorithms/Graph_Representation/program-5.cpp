/* Edge List graph representation in c++ program...

0--------1
        / \
       /   \
      2-----3
total nodes = 4
total edge = 4
-----------------------
edge:
[
    [0, 1]
    [1, 2]
    [1, 3]
    [2, 3]
]
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nodes = 4;
    //vector<vector<int>>edge_list = {{0, 1},{1, 2},{2, 3},{2, 3}};

    vector<vector<int>>edge_list;
    edge_list.push_back({0, 1});
    edge_list.push_back({1, 2});
    edge_list.push_back({2, 3});
    edge_list.push_back({2, 3});

    for(int i = 0; i < edge_list.size(); i++){
        cout<<edge_list[i][0] <<" " <<edge_list[i][1] <<"\n";
    }

return 0;
}

