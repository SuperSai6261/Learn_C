#include <stdio.h>

int main() {
  char A[] = "How are you";
  int count_spc = 0;
  for (int i = 0; A[i] != '\0'; i++) {
    if (A[i] == ' ') {
      count_spc++;
    }
  }
  printf("%d", count_spc);
  return 0;
}
