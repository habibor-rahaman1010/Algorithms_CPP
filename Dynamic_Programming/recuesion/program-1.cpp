// fibonacchi problem solve in c++ program...

#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n <= 2){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout<< "Enter the value of n: ";
    cin >> n;
    int ans = fib(n);
    cout<<"result is: "<<ans;

return 0;
}