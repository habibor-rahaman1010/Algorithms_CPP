/* Adjacency List graph representation in c++ program...

0--------1
        / \
       /   \
      2-----3
total nodes = 4
total edge = 4
undirected + unweighted
-----------------------
path:
0 -> [1]
1 -> [0, 2, 3]
2 -> [1, 3]
3 -> [1, 2]

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nodes = 4;
    vector<int>adjacent_list[nodes];
    adjacent_list[0] = {1};
    adjacent_list[1] = {0, 2, 3};
    adjacent_list[2] = {1, 3};
    adjacent_list[3] = {1, 2};

    for(int i = 0; i < nodes; i++){
        cout<<i <<" -> ";
        for(int j = 0; j < adjacent_list[i].size(); j++){
            cout<<adjacent_list[i][j] <<" ";
        }
        cout<<"\n";
    }

return 0;
}
