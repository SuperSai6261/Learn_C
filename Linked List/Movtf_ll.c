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

struct Node *Mtf_Search(struct Node *p, int key) {
  struct Node *q = NULL;

  while (p != NULL) {
    if (p->data == key) {
      if (q != NULL) {
        q->next = p->next;
        p->next = first;
        first = p;
      }
      return p;
    }

    q = p;
    p = p->next;
  }

  return NULL;
}

int main() {
  int A[] = {
      3, 5, 1, 6, 8,
  };
  Create(A, 5);

  struct Node *p = Mtf_Search(first, 6);

  if (p)
    printf("Found: %d\n", p->data);
}
