#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *A;
  int size;
  int length;
};

void swap(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void Insert_V(struct Array *arr) {
  for (int i = 0; i < arr->length; i++) {
    scanf("%d", &arr->A[i]);
  }
}

void Insert_sortA(struct Array *arr, int n) {
  int i = arr->length - 1;

  while (i >= 0 && n < arr->A[i]) {
    arr->A[i + 1] = arr->A[i];
    i--;
  }

  arr->A[i + 1] = n;
  arr->length++;
}

void Neg_Ls(struct Array *arr) {
  int i = 0;
  int j = arr->length - 1;

  while (i < j) {

    while (arr->A[i] < 0)
      i++;
    while (arr->A[j] >= 0)
      j--;

    if (i < j) {
      swap(&arr->A[i], &arr->A[j]);
    }
  }
}

void Display(struct Array *arr) {
  for (int i = 0; i < arr->length; i++) {
    printf("%d ", arr->A[i]);
  }
}

int main() {

  struct Array arr;
  int n;

  printf("Enter the size of an array: ");
  scanf("%d", &arr.size);

  printf("Enter the length of an array: ");
  scanf("%d", &arr.length);

  arr.A = (int *)malloc(arr.size * sizeof(int));

  printf("Enter elements:\n");
  Insert_V(&arr);

  printf("Enter value to insert in sorted array: ");
  scanf("%d", &n);

  Insert_sortA(&arr, n);

  Neg_Ls(&arr);

  printf("Array after operations:\n");
  Display(&arr);
}
