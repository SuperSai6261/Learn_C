#include <stdio.h>

int fact(int n) {
  if (n == 0) {
    return 1;
  } else {
    return fact(n - 1) * n;
  }
}

int main() {
  int r = 5;
  int c = fact(r);
  printf("%d", c);
  return 0;
}
