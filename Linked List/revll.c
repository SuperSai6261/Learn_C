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

void RE(struct Node *p, int sz) {
  int *A = (int *)malloc(sz * sizeof(int));
  int i = 0;
  while (p != NULL) {
    A[i] = p->data;
    p = p->next;
    i++;
  }

  i--;
  p = first;
  while (p != NULL) {
    p->data = A[i--];
    p = p->next;
  }
}

void RL(struct Node *p) {
  struct Node *q = NULL, *r = NULL;
  while (p != NULL) {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  first = q;
}

void Display(struct Node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
}

int main() {
  int A[] = {2, 5, 8, 0, 3};
  Create(A, 5);

  RE(first, 5);
  RL(first);

  Display(first);
}
