# Problem

### 問題1 次のような九九表を表示する関数 ninety_nine を定義してください。
***

void ninety_nine(void);

   |  1  2  3  4  5  6  7  8  9
---+---------------------------
 1 |  1  2  3  4  5  6  7  8  9 
 2 |  2  4  6  8 10 12 14 16 18 
 3 |  3  6  9 12 15 18 21 24 27 
 4 |  4  8 12 16 20 24 28 32 36 
 5 |  5 10 15 20 25 30 35 40 45 
 6 |  6 12 18 24 30 36 42 48 54 
 7 |  7 14 21 28 35 42 49 56 63 
 8 |  8 16 24 32 40 48 56 64 72 
 9 |  9 18 27 36 45 54 63 72 81 
 

### 問題2 整数 n から m までの和、二乗の和、三乗の和を求める関数 sum_of_int, sum_of_square, sum_of_cube を次に示す公式を使って定義してください。なお、int ではすぐにオーバーフローするので double を使って計算してください。
***
1 + 2 + 3 + ... + n = n(n+1)/ 2
1 + 22 + 32 + ... + n2 = n(n+1)(2n+1)/6
1 + 23 + 33 + ... + n3 = n2(n+1)2/4
double sum_of_int(int n, int m);
double sum_of_square(int n, int m);
double sum_of_cube(int n, int m);

### 問題3 x の y 乗を求める関数 power を定義してください。ここでは、x を double, y を int とします。
***

double power(double x, int y);

### 問題4 下図に示すフィボナッチ関数 fibo を定義してください。
***

~~~ c 
          ┌ 1;                     n = 0
fibo(n) = ┤ 1;                     n = 1
          └ fibo(n-1) + fibo(n-2); n > 1

1, 1, 2, 3, 5, 8, 13 .... という直前の 2 項を足していく数列

    図 : フィボナッチ関数の定義
int fibo(int n);
~~~

### 問題５ 整数 n を b 進数 (2 <= b <= 16) で画面 (標準出力) に表示する関数 print_int を定義してください。
***
~~~ c 
void print_int(int n, int b);
~~~

### 問題6 n 個の中から r 個を選ぶ組み合わせの数 nＣr を求める関数 combination を定義してください。
***
~~~ c 
int combination(int n, int r);
~~~

### 問題7 1 から n までの数字から m 個を選ぶ順列を画面に表示する関数 permutations を定義してください。
***
~~~ c 
void permutations(int n, int m);
~~~

### 問題8 1 から n までの数字から重複を許して m 個を選ぶ順列を画面に表示する関数 repeat_perm を定義してください。
***
~~~ c 
void repeat_perm(int n, int m);
~~~

### 問題9 1 から n までの数字から r 個を選ぶ組み合わせを画面に表示する関数 combinations を定義してください。
***
~~~ c 
void combinations(int n, int r);
~~~

### 問題10 1 から n までの数字から重複を許して r 個を選ぶ組み合わせを画面に表示する関数 repeat_comb を定義してください。
***
~~~ c
void repeat_comb(int n, int r);
~~~
