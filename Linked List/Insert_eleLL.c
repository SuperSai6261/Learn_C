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

void Display(struct Node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

void Insert(int pos, int x) {
  struct Node *p, *q;

  if (pos == 0) {

    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = x;
    p->next = first;
    first = p;
  } else if (pos > 0) {

    q = first;

    for (int i = 0; (i < pos - 1) && q; i++) {
      q = q->next;
    }
    if (q) {
      p = (struct Node *)malloc(sizeof(struct Node));
      p->data = x;
      p->next = q->next;
      q->next = p;
    }
  }
}

int main() {
  int A[] = {2, 5, 7, 3, 8};
  Create(A, 5);
  Insert(3, 20);
  printf("After Insert:\n");
  Display(first);

  return 0;
}
