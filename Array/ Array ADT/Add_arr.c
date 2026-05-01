#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *A;
  int size;
  int length;
};

void add(struct Array *arr, int x) {
  if (arr->length < arr->size) {
    arr->A[arr->length] = x;
    arr->length++;
  }
}

int main() {

  struct Array arr;
  int n;
  int x = 10;

  printf("Enter size of array = ");
  scanf("%d", &n);

  arr.size = n + 1; // capacity
  arr.length = n;   // elements present

  arr.A = (int *)malloc(arr.size * sizeof(int));

  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr.A[i]);
  }

  add(&arr, x);

  for (int i = 0; i < arr.length; i++) {
    printf("%d ", arr.A[i]);
  }

  return 0;
}
