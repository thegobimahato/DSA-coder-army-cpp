#include <iostream>
using namespace std;

int main() {
  int i, n;
  cout << "Enter the number: ";
  cin >> n;

  for (i = n; i >= 1; i = i - 1) {
    cout << i << " ";
  }

  cout << endl;

  return 0;
}