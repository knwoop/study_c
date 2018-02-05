#include <stdio.h>
#include <stdbool.h>

#define N 100

// 素数を格納する配列
int prime_table[N] = {[0] = 2}; // C99
int prime_size     = 1;

int main(void)
{
  for (int n = 3; n <= N; n += 2) {
    bool isPrime = true;
    // 格納されている素数の中から検証
    for (int i = 1; i < prime_size; i++) {
      int prime = prime_table[i];
      if (prime * prime > n) {
        break;
      }
      if (n % prime == 0) {
        isPrime = false;
        break;
      }
    }

    if (isPrime) {
      prime_table[prime_size++] = n;
    }
  }

  // 表示
  for (int i = 0; i < prime_size; i++) {
    printf("%d ", prime_table[i]);
  }

  printf("\n");
  return 0;
}
