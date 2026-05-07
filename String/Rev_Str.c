#include <stdio.h>
#include <stdlib.h>

int main() {
  char A[50];
  char *B;
  int i, j, len = 0;

  printf("Enter your String = ");
  scanf("%s", A);

  for (i = 0; A[i] != '\0'; i++) {
    len++;
  }

  B = (char *)malloc((len + 1) * sizeof(char));

  i = len - 1;

  for (j = 0; i >= 0; i--, j++) {
    B[j] = A[i];
  }

  B[j] = '\0';

  printf("%s", B);

  return 0;
}
