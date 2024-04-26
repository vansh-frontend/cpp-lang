#include <iostream>

int main()
{
  int rows;
  std::cout << "Enter the number of rows: ";
  std::cin >> rows;

  for (int i = 1; i <= rows; ++i)
  {
    for (int j = 1; j <= rows - i; ++j)
    {
      std::cout << " ";
    }

    for (int j = 1; j <= 2 * i - 1; ++j)
    {
      std::cout << "*";
    }

    std::cout << "\n";
  }

  return 0;
}
