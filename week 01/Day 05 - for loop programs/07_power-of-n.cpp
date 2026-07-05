#include <iostream>
using namespace std;

int main() {
  int i, n, pow;
  cout << "Enter the number: ";
  cin >> n;
  cout << "Enter the power: ";
  cin >> pow;

  int num = n;
  for (i = 1; i < pow; i = i + 1) {
    num = num * n;
  }

  cout << "The result is: " << num << endl;

  return 0;
}