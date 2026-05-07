#include <stdio.h>

int main() {

  char A[] = "Nitin";
  char B[6];
  int i = 0, j = 0;
  int l = 0, m = 0;

  for (i = 0; A[i] != '\0'; i++) {
  }

  i = i - 1;

  for (j = 0; i >= 0; j++, i--) {
    B[j] = A[i];
  }
  B[j] = '\0';
  printf("%s\n", B);
  printf("%s\n", A);

  for (l = 0, m = 0; A[l] != '\0' && B[m] != '\0'; l++, m++) {
    if (A[l] != B[m]) {
      break;
    }
  }
  if (A[l] == B[m]) {
    printf("Palindrome");
  } else {
    printf("Not Palindrome");
  }
  return 0;
}
