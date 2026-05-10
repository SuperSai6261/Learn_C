#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *first = NULL;

void create(int A[], int n) {
  int i = 0;
  struct Node *t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  last = first;
  last->next = NULL;

  for (int i = 1; i < n; i++) {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void RDisplay(struct Node *p) {
  if (p != NULL) {
    printf("%d \n", p->data);
    RDisplay(p->next);
  }
}

int main() {
  int A[] = {2, 3, 4, 5, 6};
  create(A, 5);
  RDisplay(first);
}
