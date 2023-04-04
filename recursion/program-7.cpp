//fibonacchi series in c++ program...

#include <iostream>
using namespace std;

int fibonacchi(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
        return (fibonacchi(n - 1) + fibonacchi(n - 2));
    }
}

int main() {
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;
    int ans = fibonacchi(n);
    cout<<ans <<"\n";

return 0;
}
