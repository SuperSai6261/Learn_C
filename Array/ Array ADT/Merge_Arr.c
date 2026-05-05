#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *A;
  int *B;
  int *K;
  int sizeA;
  int sizeB;
  int lengthA;
  int lengthB;
};

void Insert_VA(struct Array *arr) {
  for (int i = 0; i < arr->lengthA; i++) {
    scanf("%d", &arr->A[i]);
  }
}

void Insert_VB(struct Array *arr) {
  for (int j = 0; j < arr->lengthB; j++) {
    scanf("%d", &arr->B[j]);
  }
}

void Merge_Arr(struct Array *arr) {
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < arr->lengthA && j < arr->lengthB) {
    if (arr->A[i] < arr->B[j]) {
      arr->K[k++] = arr->A[i++];
    } else {
      arr->K[k++] = arr->B[j++];
    }
  }

  while (i < arr->lengthA)
    arr->K[k++] = arr->A[i++];

  while (j < arr->lengthB)
    arr->K[k++] = arr->B[j++];
}

void Display(struct Array *arr) {
  int kl = (arr->lengthA + arr->lengthB);
  for (int i = 0; i < kl; i++) {
    printf("%d ", arr->K[i]);
  }
}

int main() {
  struct Array arr;

  printf("Enter the size of Array A : ");
  scanf("%d", &arr.sizeA);

  printf("Enter the length of Array A : ");
  scanf("%d", &arr.lengthA);

  printf("Enter the size of Array B : ");
  scanf("%d", &arr.sizeB);

  printf("Enter the length of Array B : ");
  scanf("%d", &arr.lengthB);

  arr.A = (int *)malloc(arr.sizeA * sizeof(int));
  arr.B = (int *)malloc(arr.sizeB * sizeof(int));
  arr.K = (int *)malloc((arr.lengthA + arr.lengthB) * sizeof(int));
  printf("Enter all the elements in Array A: ");
  Insert_VA(&arr);
  printf("Enter all the elements in Array B: ");
  Insert_VB(&arr);
  Merge_Arr(&arr);
  Display(&arr);

  free(arr.A);
  free(arr.B);
  free(arr.K);
}
