#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter the number of terms: ";
  cin >> n;

  int a = 0, b = 1, curr;

  cout << "Fibonacci Series: ";

  for (int i = 1; i <= n; i++) {
    cout << a << " ";

    curr = a + b;
    a = b;
    b = curr;
  }

  cout << endl;

  return 0;
}