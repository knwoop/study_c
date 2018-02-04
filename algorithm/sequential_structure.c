#include <stdio.h>

int main()
{
  int x, y, w1, w2, w3, w4;

  scanf("%d %d", &x, &y);

  w1 = x + y;
  w2 = x - y;
  w3 = x * y;
  w4 = x / y;

  printf("%d + %d = %d\n", x, y, w1);
  printf("%d - %d = %d\n", x, y, w2);
  printf("%d * %d = %d\n", x, y, w3);
  printf("%d / %d = %d\n", x, y, w4);

  return 0;
}
