/* Adjacency Matrix graph representation in c++ program...

0--------1
        / \
       /   \
      2-----3
total nodes = 4
total edge = 4
undirected + unweighted
-----------------------
path:
0 -> 1
1 -> 0
1 -> 2
1 -> 3
2 -> 1
2 -> 3
3 -> 1
3 -> 2

*/

#include <iostream>
using namespace std;

int main(){
    int nodes = 4;
    //int matrix[nodes][nodes] = {};

    int matrix[nodes][nodes];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matrix[i][j] = 0;
        }
    }

    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[1][3] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][1] = 1;
    matrix[3][2] = 1;


    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            cout<<matrix[i][j] <<" ";
        }
        cout<<"\n";
    }


return 0;
}
