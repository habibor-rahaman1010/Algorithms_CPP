/* Edge List graph representation in c++ program...

0--------1
        / \
       /   \
      2-----3
total nodes = 4
total edge = 4
undirected + wighted
-----------------------
edge:
[
    [0, 1, 6]
    [1, 2, 7]
    [1, 3, 10]
    [2, 3, 8]
]
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nodes = 4;
    //vector<vector<int>>edge_list = {{0, 1, 6},{1, 2, 7},{2, 3, 10},{2, 3, 8}};

    vector<vector<int>>edge_list;
    edge_list.push_back({0, 1, 6});
    edge_list.push_back({1, 2, 7});
    edge_list.push_back({2, 3, 10});
    edge_list.push_back({2, 3, 8});

    for(int i = 0; i < edge_list.size(); i++){
        cout<<edge_list[i][0] <<" " <<edge_list[i][1] <<" " <<edge_list[i][2]  <<"\n";
    }

return 0;
}
