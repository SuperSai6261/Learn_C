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

struct Node *Search(struct Node *p, int key) {
  while (p != NULL) {
    if (p->data == key) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

struct Node *RSearch(struct Node *p, int key) {
  if (p == NULL) {
    return NULL;
  } else if (p->data == key) {
    return p;
  }
  return RSearch(p->next, key);
}

int main() {
  int A[] = {2, 4, 8, 34, 75};
  Create(A, 5);

  struct Node *p = Search(first, 34);
  struct Node *s = RSearch(first, 12);

  if (p != NULL)
    printf("Element found: %d\n", p->data);
  else
    printf("Element not found\n");

  if (s != NULL)
    printf("Element found: %d\n", s->data);
  else
    printf("Element not found\n");

  return 0;
}
