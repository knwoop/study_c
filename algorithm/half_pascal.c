#include <stdio.h>

#define N 16

// パスカルの三角形
int table[16][16] = {[0][0] = 1, [1][0] = 1, [1][1] = 1};  // C99

int main(void)
{
  for (int i = 2; i < N; i++) {
    table[i][0] = 1;
    for (int j = 1; j < i; j++) {
      table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
    }
    table[i][i] = 1;
  }
  // 表示
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", table[i][j]);
    }
    printf("\n");
  }
  return 0;
}

