#include <stdio.h>

int main() {
  char A[] = "WELCOME";
  for (int i = 0; A[i] != '\0'; i++) {
    A[i] += 32;
  }
  printf("%s", A);
}
