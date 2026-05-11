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

int CheckShort(struct Node *p) {
  int x = INT_MIN;
  while (p != NULL) {
    if (p->data < x) {
      return 0;
    }
    x = p->data;
    p = p->next;
  }
  return 1;
}

int main() {
  int A[] = {2, 3, 4, 6, 8};
  Create(A, 5);
}
