#include <stdio.h>
double e(int m, int n) {
  static double p = 1, f = 1;
  double r;
  if (n == 0) {
    return 1;
  } else {
    r = e(m, n - 1);
    p = m * p;
    f = f * n;
    return r + (p / f);
  }
}
int main() {
  int m = 3;
  int n = 10;
  double t = e(m, n);
  printf("%lf", t);
}
