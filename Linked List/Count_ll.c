#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *first = NULL;

void create(int A[], int n) {
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

int Count(struct Node *p) {
  int c = 0;
  while (p != NULL) {
    c++;
    p = p->next;
  }
  return c;
}

int RCount(struct Node *p) {
  if (p != NULL) {
    return RCount(p->next) + 1;
  } else {
    return 0;
  }
}

int main() {
  int A[] = {2, 5, 3, 7, 9};
  create(A, 5);
  int ct = Count(first);
  int rc = RCount(first);
  printf("Total Nodes are: %d", ct);
  printf("Total Nodes are: %d", rc);
  return 0;
}
