#include <iostream>
using namespace std;

int main() {
  int i, n, sum = 0;
  cout << "Enter the number: ";
  cin >> n;

  for (i = 1; i <= n; i = i + 1) {
    sum = sum + i;
  }

  // cout << (n * (n + 1)) / 2 << endl;
  cout << "Sum of n natural number is: " << sum << endl;

  return 0;
}