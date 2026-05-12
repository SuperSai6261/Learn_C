#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *head = NULL;

void Create(int A[], int n) {
  struct Node *t, *last;
  head = (struct Node *)malloc(sizeof(struct Node));
  head->data = A[0];
  head->next = head;
  last = head;

  for (int i = 1; i < n; i++) {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = last->next;
    last->next = t;
    last = t;
  }
}

void Display(struct Node *p) {
  do {
    printf("%d ", p->data);
    p = p->next;
  } while (p != head);
}

int main() {
  int A[] = {2, 3, 7, 9, 4};
  Create(A, 5);
  Display(head);
}
