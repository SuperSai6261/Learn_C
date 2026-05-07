#include <stdio.h>

int main() {
  char A[] = "Nitin";
  int j = 0;
  int i = 0;
  for (j = 0; A[j] != 0; j++) {
  }
  j = j - 1;

  for (i = 0; j > i; i++, j--) {
    if (A[i] != A[j]) {
      break;
    }
  }
  if (i >= j) {
    printf("It is palindrome");
  } else {
    printf("Not a palindrome");
  }
  return 0;
}
