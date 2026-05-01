#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *A;
  int size;
  int length;
};

void insert(struct Array *arr, int index, int x) {
  if (index >= 0 && index <= arr->length && arr->length < arr->size) {
    for (int i = arr->length; i > index; i--) {
      arr->A[i] = arr->A[i - 1];
    }
    arr->A[index] = x;
    arr->length++;
  }
}

int main() {

  struct Array arr;
  int n, m;

  printf("Enter the size of array = ");
  scanf("%d", &n);

  arr.A = (int *)malloc(n * sizeof(int));
  arr.size = n;

  printf("Enter the no. of entries u want = ");
  scanf("%d", &m);

  if (m > n) {
    printf("Entries cannot exceed array size\n");
    return 0;
  }

  arr.length = m;

  printf("Enter the values:\n");
  for (int i = 0; i < m; i++) {
    scanf("%d", &arr.A[i]);
  }

  insert(&arr, 4, 10);

  for (int i = 0; i < arr.length; i++) {
    printf("%d ", arr.A[i]);
  }

  free(arr.A);

  return 0;
}
