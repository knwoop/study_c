#include <stdio.h>

// 1から nまでの合計を求める
double sum_of_int_1(double n)
{
  return n * (n + 1) / 2;
}

// 二乗の和
double sum_of_square_1(double n)
{
  return n * (n + 1) * (2 * n + 1) / 6;
}

double sum_of_cube_1(double n)
{
  return n * n * (n + 1) * (n + 1) / 4;
}

double sum_of_int(int n, int m)
{
  return sum_of_int_1(m) - sum_of_int_1(n - 1);
}

double sum_of_square(int n, int m)
{
  return sum_of_square_1(m) - sum_of_square_1(n - 1);
}

double sum_of_cube(int n, int m)
{
  return sum_of_cube_1(m) - sum_of_cube_1(n -1);
}

int main(void)
{
  printf("%.0f\n", sum_of_int(1, 10000));
  printf("%.0f\n", sum_of_int(100, 10000));
  printf("%.0f\n", sum_of_square(1, 10000));
  printf("%.0f\n", sum_of_square(100, 10000));
  printf("%.0f\n", sum_of_cube(1, 10000));
  printf("%.0f\n", sum_of_cube(100, 10000));
  return 0;
}
