#include <iostream>

using namespace std;

int main()
{
  int a, b, sum;

  cout << "Enter a number 1: "; // num 1
  cin >> a;                     // cin will read the num1

  cout << "Enter a number 2: "; // num 2
  cin >> b;                     // cin will read the num2

  sum = a + b;
  cout << "\nSum of number 1 + number 2: " << sum; // sum of num1 + num2

  return 0;
}
