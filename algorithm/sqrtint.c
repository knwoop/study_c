#include <stdio.h>

// 平方根を求める
int sqrt_int(int n)
{
  int m = 1;
  while (n >= m) {
    n -= m;
    m += 2;
  }
  return m / 2;
}

int main(void)
{
  printf("%d\n", sqrt_int(100));
  printf("%d\n", sqrt_int(1000));
  printf("%d\n", sqrt_int(10000));
  printf("%d\n", sqrt_int(123456789));
  return 0;
}

