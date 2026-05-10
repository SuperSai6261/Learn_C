#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *first = NULL, *last = NULL;

void InsertLast(int x) {
  struct Node *t;
  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = x;
  t->next = NULL;

  if (first == NULL) {
    first = last = t;
  } else {
    last->next = t;
    last = t;
  }
}

void Display() {
  struct Node *p = first;
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
}

int main() {
  int n, x;
  printf("Enter the total elements: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Enter Element %d = ", i + 1);
    scanf("%d", &x);
    InsertLast(x);
  }

  printf("Linked List: ");
  Display();
}
