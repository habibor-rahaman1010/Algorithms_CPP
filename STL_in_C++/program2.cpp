//array of vector in c++ program...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of number of vectro: ";
    cin>> n;

    vector<int>ara_in_vector[n];
    for(int i = 0; i < n; i++){
        int m;
        cout<<"Enter the value of vector: ";
        cin>>m;
        ara_in_vector[i].resize(m);

        cout<<"Enter the elements of vector: ";
        for(int j = 0; j < m; j++){
            cin>>ara_in_vector[i][j];
        }
    }

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < ara_in_vector[i].size(); j++){
            cout<<ara_in_vector[i][j] <<" ";
        }
        cout<<"\n";
    }

return 0;
}

