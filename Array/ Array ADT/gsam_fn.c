#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *A;
  int size;
  int length;
};

void Insert_V(struct Array *arr) {
  for (int i = 0; i < arr->length; i++) {
    scanf("%d", &arr->A[i]);
  }
}

int Get(struct Array *arr, int indx) {
  if (indx >= 0 && indx < arr->length)
    return arr->A[indx];
  return -1;
}

void set(struct Array *arr, int indx, int x) {
  if (indx >= 0 && indx < arr->length)
    arr->A[indx] = x;
}

int max(struct Array *arr) {
  int max = arr->A[0];
  for (int i = 1; i < arr->length; i++) {
    if (max < arr->A[i]) {
      max = arr->A[i];
    }
  }
  return max;
}

int min(struct Array *arr) {
  int min = arr->A[0];
  for (int i = 1; i < arr->length; i++) {
    if (min > arr->A[i]) {
      min = arr->A[i];
    }
  }
  return min;
}

int Sum(struct Array *arr) {
  int t = 0;
  for (int i = 0; i < arr->length; i++) {
    t = t + arr->A[i];
  }
  return t;
}

int R_sum(struct Array *arr, int n) {
  if (n < 0)
    return 0;
  return R_sum(arr, n - 1) + arr->A[n];
}

float Avg(struct Array *arr) { return (float)Sum(arr) / arr->length; }

int main() {

  struct Array arr;
  int indx, x;

  printf("Enter the size of an array = ");
  scanf("%d", &arr.size);

  printf("Enter the length of an array = ");
  scanf("%d", &arr.length);

  if (arr.length > arr.size) {
    printf("Length cannot be greater than size\n");
    return 0;
  }

  arr.A = (int *)malloc(arr.size * sizeof(int));

  printf("Enter all values in the array = ");
  Insert_V(&arr);

  printf("Enter index to get value = ");
  scanf("%d", &indx);

  printf("Value at index = %d\n", Get(&arr, indx));

  printf("Enter value to set at index = ");
  scanf("%d", &x);
  set(&arr, indx, x);

  printf("Max = %d\n", max(&arr));
  printf("Min = %d\n", min(&arr));
  printf("Sum = %d\n", Sum(&arr));
  printf("Recursive Sum = %d\n", R_sum(&arr, arr.length - 1));
  printf("Average = %.2f\n", Avg(&arr));

  free(arr.A);

  return 0;
}
