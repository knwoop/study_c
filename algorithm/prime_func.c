#include <stdio.h>
#include <stdbool.h>

#define N 100

// 素数を格納する配列
int prime_table[N];
int prime_size;

// 初期化
void init()
{
  prime_table[0] = 2;
  prime_size     = 1;
}

// 素数か
int is_prime(int n)
{
  for (int i = 0; i < prime_size; i++) {
    int p = prime_table[i];
    if (p * p > n) break;
    if (n % p) return false;
  }
  return true;
}

// 素数を追加する
void push_prime(int n)
{
  prime_table[prime_size++] = n;
}

// 素数の表示
void print_prime(void)
{
  for (int i = 0; i < prime_size; i++) {
    printf("%d ", prime_table[i]);
  }
  printf("\n");
}

int main(void)
{
  init();
  // 素数を求める
  for (int n = 3; 3 <= prime_size; n++) {
    if (is_prime(n)) push_prime(n);
  }
  // 表示
  print_prime();
  return 0;
}
