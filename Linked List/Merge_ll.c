#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;

void CreateA(int A[], int n) {
  struct Node *t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (int i = 1; i < n; i++) {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void CreateB(int B[], int n) {
  struct Node *t, *last;
  second = (struct Node *)malloc(sizeof(struct Node));
  second->data = B[0];
  second->next = NULL;
  last = second;

  for (int i = 1; i < n; i++) {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = B[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void Merge(struct Node *first, struct Node *second) {
  struct Node *last;
  if (first->data < second->data) {
    third = last = first;
    first = first->next;
    last->next = NULL;
  } else {
    third = last = second;
    second = second->next;
    last->next = NULL;
  }
  while (first != NULL && second != NULL) {
    if (first->data < second->data) {
      last->next = first;
      last = first;
      first = first->next;
      last->next = NULL;
    } else {
      last->next = second;
      last = second;
      second = second->next;
      last->next = NULL;
    }
  }
  if (first != NULL) {
    last->next = first;
  } else {
    last->next = second;
  }
}

void Display(struct Node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main() {
  int A[] = {2, 8, 10, 25, 50};
  int B[] = {3, 4, 6, 15, 45};
  CreateA(A, 5);
  CreateB(B, 5);

  Merge(first, second);

  printf("Merged List: ");
  Display(third);
}
