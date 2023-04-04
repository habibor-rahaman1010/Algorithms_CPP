/*
Write a recursive function digitSum(int n) that takes a non-negative integer as input and returns the sum of its digits. Follow all the steps of problem 4.
Example:
	Input: 7464
	Output: 21
	Explanation: 7 + 4 + 6 + 4 = 21
*/

#include <iostream>
using namespace std;

int digite_sum(int n){
    if(n < 10){
        return n;
    }
    else{
        return ((n % 10) + digite_sum(n / 10));
    }
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum = digite_sum(n);
    cout<<"sum is: "<<sum;

return 0;
}
