#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *A;
  int size;
  int length;
};

void Delete(struct Array *arr, int indx) {
  if (indx >= 0 && indx < arr->length) {
    for (int i = indx; i < arr->length - 1; i++) {
      arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
  }
}

void Display(struct Array *arr) {
  printf("Array after deletion = ");
  for (int i = 0; i < arr->length; i++) {
    printf("%d ", arr->A[i]);
  }
  printf("\n");
}

int main() {

  struct Array arr;
  int n, m, d;

  printf("Enter the size of an array = ");
  scanf("%d", &n);
  arr.size = n;

  arr.A = (int *)malloc(n * sizeof(int));

  printf("Enter the number of elements = ");
  scanf("%d", &m);

  if (m > n) {
    printf("Elements cannot exceed array size\n");
    return 0;
  }

  arr.length = m;

  printf("Enter the elements:\n");
  for (int i = 0; i < m; i++) {
    scanf("%d", &arr.A[i]);
  }

  printf("Which index do you want to delete: ");
  scanf("%d", &d);

  Delete(&arr, d);

  Display(&arr);

  free(arr.A);

  return 0;
}
