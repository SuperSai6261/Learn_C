#include <stdio.h>

int main() {
  char A[] = "How are you";
  int count_v = 0;
  int count_c = 0;
  for (int i = 0; A[i] != '\0'; i++) {
    if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' ||
        A[i] == 'u') {
      count_v++;
    } else if ((A[i] >= 65 && A[i] <= 97) || (A[i] >= 90 && A[i] <= 122)) {
      count_c++;
    }
  }
  printf("%d\n", count_v);
  printf("%d\n", count_c);
  return 0;
}
