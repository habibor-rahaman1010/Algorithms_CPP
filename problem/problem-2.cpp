
#include <bits/stdc++.h>
using namespace std;

int find_kingpos(int n, vector<int>&v) {
    int left=0;
    int right=0;
    int kingpos = -1;

    for (int i = 0; i < n; i++) {
        right += v[i];
    }

    for(int i=0; i<n; i++) {
        right -= v[i];

        if (left == right) {
            kingpos = i;
            break;
        }

        left += v[i];
    }

    return kingpos;
}

int main(){
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }

        int kingpos = find_kingpos(n, v);
        cout<<kingpos<<endl;
    }

    return 0;
}