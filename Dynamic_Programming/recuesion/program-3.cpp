// fibonacchi problem solve in c++ program... optimize version

#include <bits/stdc++.h>
using namespace std;
long long ara[1001];

long long fib(int n){
    if(n <= 2){
        return 1;
    }
    if(ara[n] != 0){
        return ara[n];
    }
    return ara[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout<< "Enter the value of n: ";
    cin >> n;
    int ans = fib(n);
    cout<<"result is: "<<ans;

return 0;
}