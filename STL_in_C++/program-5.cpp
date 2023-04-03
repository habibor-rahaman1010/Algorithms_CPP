//array of pair in c++ program...

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 4;
    vector<pair<int, int>>array_pair[n];
    array_pair[0].push_back({1, 20});
    array_pair[0].push_back(pair<int, int>(2, 12));
    array_pair[0].push_back(pair<int, int>(5, 22));
    array_pair[1].push_back({3, 70});
    array_pair[2].push_back({4, 50});
    array_pair[3].push_back({5, 33});

     for(int i = 0; i < n; i++){
        cout<<i <<" -> ";
        for(int j = 0; j < array_pair[i].size(); j++){
            cout <<"("<<array_pair[i][j].first <<", " << array_pair[i][j].second <<"), ";
        }
        cout<<"\n";
    }

return 0;
}
