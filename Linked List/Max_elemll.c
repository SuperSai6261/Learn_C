#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *first = NULL;

void Create(int A[], int n) {
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

int max(struct Node *p) {
  int Max = INT_MIN;
  while (p != NULL) {
    if (p->data > Max) {
      Max = p->data;
    }
    p = p->next;
  }
  return Max;
}

int RMax(struct Node *p) {
  int x;

  if (p == NULL)
    return INT_MIN;

  x = RMax(p->next);

  if (x > p->data)
    return x;
  else
    return p->data;
}

int main() {
  int A[] = {2, 3, 7, 4, 9};

  Create(A, 5);

  printf("Iterative Max = %d\n", max(first));
  printf("Recursive Max = %d\n", RMax(first));

  return 0;
}
