#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter the number: ";
  cin >> n;

  if (n < 2) {
    cout << "Not a prime number" << endl;
    return 0;
  }

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << "Not a prime number" << endl;
      return 0;
    }
  }

  cout << "Prime number" << endl;
  return 0;
}