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

void SortInsr(int x) {
  struct Node *p = first, *q = NULL, *t;

  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = x;
  t->next = NULL;

  if (first == NULL) {
    first = t;
  } else {
    while (p && p->data < x) {
      q = p;
      p = p->next;
    }

    if (p == first) {
      t->next = first;
      first = t;
    } else {
      t->next = q->next;
      q->next = t;
    }
  }
}

void Display(struct Node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
}

int main() {
  int A[] = {2, 4, 6, 8, 10};

  Create(A, 5);

  SortInsr(1);
  SortInsr(5);

  Display(first);
}
