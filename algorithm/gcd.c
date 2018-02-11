#include <stdio.h>

// 最大公約数
int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

// 最小公倍数
int lcm(int a, int b)
{
  return a * b / gcd(a, b);
}

int main(void)
{  
  printf("%d\n", gcd(42, 30));
  printf("%d\n", gcd(15, 70));
  printf("%d\n", lcm(5, 7));
  printf("%d\n", lcm(14, 35));
  return 0;
}
