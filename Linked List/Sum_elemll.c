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

int Sum(struct Node *p) {
  int sum = 0;
  while (p != 0) {
    sum = sum + p->data;
    p = p->next;
  }
  return sum;
}

int RSum(struct Node *p) {
  if (p != 0) {
    return p->data + RSum(p->next);
  } else {
    return 0;
  }
}

int main() {
  int A[] = {3, 6, 5, 8, 2};
  Create(A, 5);
  int s = Sum(first);
  int rs = RSum(first);

  printf("Sum : %d\n", s);
  printf("RSum: %d\n", rs);
  return 0;
}
