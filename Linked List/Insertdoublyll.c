#include <stdio.h>
#include <stdlib.h>

struct Node {
  struct Node *prev;
  int data;
  struct Node *next;
} *first = NULL;

void Create(int A[], int n) {
  struct Node *t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->prev = NULL;
  first->next = NULL;
  last = first;

  for (int i = 1; i < n; i++) {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->prev = last;
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void Insert(struct Node *p, int indx, int x) {
  struct Node *t;
  if (indx == 1) {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->prev = NULL;
    t->next = first;
    first->prev = t;
    first = t;
  } else {
    for (int i = 0; i < indx - 1; i++) {
      p = p->next;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->prev = p;
    t->next = p->next;
    if (p->next)
      p->next->prev = t;
    p->next = t;
  }
}

void Display(struct Node *p) {
  while (p) {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main() {
  int A[] = {2, 5, 7, 9, 4};
  Create(A, 5);

  Insert(first, 2, 100);
  Display(first);
}
