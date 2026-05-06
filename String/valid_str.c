#include <stdbool.h>
#include <stdio.h>

int isValid(char *A) {
  for (int i = 0; A[i] != '\0'; i++) {
    if (!(A[i] >= 65 && A[i] <= 90) && !(A[i] >= 97 && A[i] <= 122) &&
        !(A[i] >= 48 && A[i] <= 57)) {
      return 0;
    }
  }
  return 1;
}
int main() {
  char *A = "Ani?123";

  bool valid = isValid(A);

  if (valid) {
    printf("Key is valid");
  } else {
    printf("Not Valid Key");
  }
  return 0;
}
