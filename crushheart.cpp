#include <iostream>
using namespace std;

int main()
{
  int n, i;
  char c[20];

  cout << "Enter the name of your dream crush, someone whom you admire passionately, even though you know they can never be yours❤️❤️ : ";
  cin >> c;

  cout << "how many times you want to show (for example: 3 or 5): ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    cout << "you are so beautiful " << c << "❤️❤️ ";
    // cout << "\n    ** **    \n";
    cout << "\n";

    cout << "  *  *   *  \n";
    cout << "  *      * \n";
    cout << "   *    *  \n";
    cout << "     *           \n ";
  }

  return 0;
}
