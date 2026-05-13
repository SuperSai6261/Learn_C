#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *top = NULL;

void push(int d) {
  struct Node *t;

  t = (struct Node *)malloc(sizeof(struct Node));
  if (t == NULL) {
    printf("Strack is full");
  } else {
    t->data = d;
    t->next = top;
    top = t;
  }
}

int delete() {
  int x = -1;
  struct Node *t;
  if (top == NULL) {
    printf("Stack is empty");
  } else {
    t = top;
    top = top->next;
    x = t->data;
    free(t);
  }
  return x;
}

void display(struct Node *p) {
  struct Node *t;
  t = top;
  while (t != NULL) {
    printf("%d ", t->data);
    t = t->next;
  }
  printf("\n");
}

int main() {

  push(10);
  push(20);
  push(30);

  display(top);

  printf("Popped = %d\n", delete());

  display(top);
}
