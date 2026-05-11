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

void Delete(struct Node *p, int indx) {
  struct Node *q;

  if (indx == 1) {
    q = first;
    first = first->next;
    free(q);
  } else {
    for (int i = 0; i < indx - 2 && p != NULL; i++) {
      p = p->next;
    }

    if (p != NULL && p->next != NULL) {
      q = p->next;
      p->next = q->next;
      free(q);
    }
  }
}

void Display(struct Node *s) {
  while (s != NULL) {
    printf("%d ", s->data);
    s = s->next;
  }
}

int main() {
  int A[] = {2, 3, 5, 8, 9};
  Create(A, 5);
  Delete(first, 2);
  Display(first);
}
