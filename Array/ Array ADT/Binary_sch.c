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

void Binary_sc(struct Array *arr, int key) {
  int l = 0;
  int h = arr->length - 1;
  int mid = (l + h) / 2;
  while (l <= h) {
    if (key == arr->A[mid]) {
      printf("Key found at index %d\n", mid);
      return;
    } else if (key < arr->A[mid]) {
      h = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  printf("Key not found\n");
}

int main() {
  int key;
  struct Array arr;

  printf("Enter the size of an array = ");
  scanf("%d", &arr.size);

  printf("Enter the length of an array = ");
  scanf("%d", &arr.length);

  arr.A = (int *)malloc(arr.size * sizeof(int));

  Insert_V(&arr);

  printf("Enter the key u want to search = ");
  scanf("%d", &key);

  Binary_sc(&arr, key);
}
