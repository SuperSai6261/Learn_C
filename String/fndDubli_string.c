#include <stdio.h>

int main() {
  char A[] = "finding";
  int i, j;

  for (i = 0; A[i] != '\0'; i++) {

    int count = 1;

    for (j = 0; j < i; j++) {
      if (A[i] == A[j]) {
        break;
      }
    }

    if (j != i)
      continue;

    for (j = i + 1; A[j] != '\0'; j++) {
      if (A[i] == A[j]) {
        count++;
      }
    }

    printf("%c appears %d times\n", A[i], count);
  }

  return 0;
}
