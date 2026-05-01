#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *A;
  int size;
  int length;
};

void Display(struct Array arr, int n) {
  printf("your whole array is = ");
  for (int i = 0; i < n; i++) {
    printf("%d  ", arr.A[i]);
  }
}

int main() {
  struct Array arr;
  int n;
  printf("Enter size of an array = ");
  scanf("%d", &arr.size);

  arr.A = (int *)malloc(arr.size * sizeof(int));

  printf("Enter the length of array = ");
  scanf("%d", &n);

  printf("Enter your elements = ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr.A[i]);
  }

  arr.length = n;
  Display(arr, n);
}
