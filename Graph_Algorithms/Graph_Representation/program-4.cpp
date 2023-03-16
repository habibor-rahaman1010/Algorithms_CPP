/* Adjacency List graph representation in c++ program...

0--------1
        / \
       /   \
      2-----3
total nodes = 4
total edge = 4
directed + weighted
-----------------------
path:
    2
0 -----> 1

    4
1 ------> 2

    8
3 ------> 2

    7
3 ------> 1

0 -> (1, 2)
1 -> (2, 4)
2 ->
3 -> (1, 7), (2, 8)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nodes = 4;
    vector<pair<int, int>>adjacent_list[nodes];

    adjacent_list[0] = {pair<int, int>(1, 2)};
    adjacent_list[1] = {pair<int, int>(2, 4)};
    adjacent_list[2] = {};
    adjacent_list[3] = {pair<int, int>(1, 7)};
    adjacent_list[3] = {pair<int, int>(2, 8)};

    for(int i = 0; i < nodes; i++){
        cout<<i <<" -> ";
        for(int j = 0; j < adjacent_list[i].size(); j++){
            cout <<"("<<adjacent_list[i][j].first <<", " << adjacent_list[i][j].second <<"), ";
        }
        cout<<"\n";
    }

return 0;
}



