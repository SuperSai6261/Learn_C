#include <stdio.h>

int main() {
  char A[] = "  Where Are    U";
  int word = 0;

  for (int i = 0; A[i] != '\0'; i++) {
    if (A[i] != ' ' && (i == 0 || A[i - 1] == ' '))
      word++;
  }

  printf("%d", word);
}
