#include <iostream>
using namespace std;

int get_sum(int arr[], int n, int sum) {
  if(n == 0){
    return sum;
  }
  sum += arr[n - 1];
  return get_sum(arr, n - 1, sum);
}

int main() {

  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int total = 0;
  total = get_sum(arr, n, total);

  cout << total << "\n";

  return 0;
}
