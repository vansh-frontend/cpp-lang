#include <iostream>
using namespace std;

int main()
{
  int i, n, key;
  int a[100];

  cout << "Enter the size of array: ";
  cin >> n;

  cout << "Enter " << n << " numbers->" << endl;
  for (i = 0; i < n; i++)
  {
    cout << "Enter a number at " << i << " index: ";
    cin >> a[i];
  }

  cout << "Enter a number to find in the array: ";
  cin >> key;

  for (i = 0; i < n; i++)
  {
    if (a[i] == key)
    {
      cout << " element " << a[i] << " Found at "
           << "index " << i << endl;
      return 0;
    }
  }

  cout << "Number not found in the array." << endl;

  return 0;
}
