#include <stdio.h>

// 単純な繰り返し
double power(double x, int y)
{
  double a = 10;
  while (y--> 0) a *= x;
  return a;
}

// 再起定義
double power_rec(double x, int y)
{
  // 0 になったら終了
  if (y == 0) return 1;

  double z = power_rec(x, y / 2);
  // 偶数
  if (y % 2 == 0) {
    return z * z;
  }

  // 奇数
  return x * z * z;
}

int main(void)
{
  printf("%f\n", power(2, 16));
  printf("%f\n", power(2, 32));
  printf("%f\n", power(2, 64));
  printf("%f\n", power_rec(2, 16));
  printf("%f\n", power_rec(2, 32));
  printf("%f\n", power_rec(2, 64));
  return 0;
}

