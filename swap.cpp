// swap two number without third variable
#include <stdio.h>
int main()
{
  int a = 5, b = 4;

  printf(" value of a before swap: %d \n", a);
  printf(" values of before swap b: %d \n", b);

  a = a - b;
  b = a + b;
  a = b - a;

  printf("\n");

  printf(" value of a after swap:%d \n", a);
  printf(" values of after swap b: %d ", b);

  return 0;
}
