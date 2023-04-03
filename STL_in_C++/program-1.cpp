// vector int in c++ program..

#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    vector<int>ara(n);

    for(int i = 0; i < n; i++){
        cin>>ara[i];
    }

    for(int i = 0; i < ara.size(); i++){
        cout<<ara[i] <<" ";
    }

return 0;
}
