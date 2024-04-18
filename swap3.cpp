#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cout << "Enter the value of a before swap: ";
  cin >> a;
  cout << "Enter the value of b before swap: ";
  cin >> b;

  // Swapping using XOR operator
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  cout << "\n";

  cout << "Value of a after swap: " << a << endl;
  cout << "Value of b after swap: " << b << endl;

  return 0;
}
