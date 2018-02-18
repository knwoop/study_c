#include <stdio.h>

// 二重再帰
int fibo(int n)
{
  if (n == 0 || n ==1) {
    return 1;
  }

  return fibo(n - 1) + fibo(n -2);
}

// 末尾再帰
int fibo_sub(int n, int a, int b)
{
  if (n == 0)
    return a;
  else
    return fibo_sub(n - 1, a + b, a);
}

int fibo_rec(int n)
{
  return fibo_sub(n, 1, 0);
}

// 繰り返し
int fiboi(int n)
{
  int a = 1, b = 0;
  while (n-- > 0) {
    int c = a;
    a += b;
    b = c;
  }
  return a;
}

int main(void)
{
  printf("%d\n", fibo(30));
  printf("%d\n", fibo_rec(30));
  printf("%d\n", fiboi(30));
  return 0;
}

