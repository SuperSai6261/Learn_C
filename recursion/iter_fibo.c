#include <stdio.h>

int fib(int n) {
  int to = 0, t1 = 1, s = 0;
  if (n <= 1)
    return n;
  for (int i = 2; i <= n; i++) {
    s = to + t1;
    to = t1;
    t1 = s;
  }
  return s;
}

int main() {
  printf("%d\n", fib(10));
  return 0;
}
