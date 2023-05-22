#include <bits/stdc++.h>
using namespace std;

long long sumRange(long long n){
    long long sum = (n * (n + 1)) / 2;
    return sum;
}

long long sumRange(long long l, long long r){
    return sumRange(r) - sumRange(l - 1);
}

int main(){
    int t;cin>>t;
    while(t--){
        long long l,r;cin>>l>>r;
        if(l < r){
            cout<<sumRange(l, r)<<endl;
        }
        else{
            cout<<sumRange(r, l)<<endl;
        }
    }
    return 0;
}
