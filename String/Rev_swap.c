#include <stdio.h>

int main() {
  char A[] = "python";
  char temp;
  int i, j;

  for (i = 0; A[i] != '\0'; i++) {
  }
  i = i - 1;

  for (j = 0; i > j; j++, i--) {
    temp = A[j];
    A[j] = A[i];
    A[i] = temp;
  }
  printf("%s", A);
  return 0;
}
