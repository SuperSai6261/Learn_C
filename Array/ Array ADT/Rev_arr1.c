#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *A;
  int size;
  int length;
};

void swap(int *p, int *q);

void Insert_V(struct Array *arr) {
  for (int i = 0; i < arr->length; i++) {
    scanf("%d", &arr->A[i]);
  }
}

void Display(struct Array *arr) {
  for (int i = 0; i < arr->length; i++) {
    printf("%d ", arr->A[i]);
  }
  printf("\n");
}

void Rev_arr1(struct Array *arr) {
  int *B;
  int i, j;

  B = (int *)malloc(arr->size * sizeof(int));

  for (i = arr->length - 1, j = 0; i >= 0; i--, j++) {
    B[j] = arr->A[i];
  }

  for (i = 0; i < arr->length; i++) {
    arr->A[i] = B[i];
  }

  free(B);
}

void Rev_arr2(struct Array *arr) {
  int i = 0;
  int j = arr->length - 1;

  while (i < j) {
    swap(&arr->A[i], &arr->A[j]);
    i++;
    j--;
  }
}

void swap(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

int main() {
  struct Array arr;

  printf("Enter size: ");
  scanf("%d", &arr.size);

  printf("Enter length: ");
  scanf("%d", &arr.length);

  arr.A = (int *)malloc(arr.size * sizeof(int));

  printf("Enter elements:\n");
  Insert_V(&arr);

  Rev_arr2(&arr);

  printf("Reversed array:\n");
  Display(&arr);

  free(arr.A);
}
