//fibonacci calculation in cpp program...

#include <bits/stdc++.h>
using namespace std;

int save[101];

int fib(int n){
    if(n <= 2) return 1;
    if(save[n] != 0){
        return save[n];
    }
    save[n] = fib(n - 1) + fib(n - 2);
    return save[n];
}

int main() {
    int n;
    cin>> n;
    int ans = fib(n);
    cout<< ans;

return 0;
}