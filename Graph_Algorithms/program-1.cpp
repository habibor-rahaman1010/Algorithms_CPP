//Adjacency matrix in graph theory in c++ program...

#include <iostream>
using namespace std;

int main(){
    int node = 4;
    int matrix[node][node] = {};

    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][2] = 1;
    matrix[3][1] = 1;
    matrix[1][3] = 1;

    for(int i = 0; i < node; i++){
        for(int j = 0; j < node; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

return 0;
}

