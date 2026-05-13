#include <stdio.h>
#include <stdlib.h>

struct Stack {
  int size;
  int top;
  int *S;
};

void Create(struct Stack *st) {
  printf("Enter the size of stack = ");
  scanf("%d", &st->size);

  st->top = -1;
  st->S = (int *)malloc(st->size * sizeof(int));
}

void Display(struct Stack st) {
  for (int i = st.top; i >= 0; i--) {
    printf("%d ", st.S[i]);
  }
  printf("\n");
}

void push(struct Stack *st, int x) {
  if (st->top == st->size - 1) {
    printf("Stack Overflow\n");
  } else {
    st->top++;
    st->S[st->top] = x;
  }
}

int pop(struct Stack *st) {
  int x = -1;
  if (st->top == -1) {
    printf("Stack empty\n");
  } else {
    x = st->S[st->top];
    st->top--;
  }
  return x;
}

int peek(struct Stack st, int indx) {
  int x = -1;
  if (st.top - indx + 1 < 0) {
    printf("Invalid pos");
  } else {
    x = st.S[st.top - indx + 1];
  }
  return x;
}

int stackTop(struct Stack st) {
  if (st.top == -1) {
    return -1;
  } else {
    return st.S[st.top];
  }
}

int isEmpty(struct Stack st) {
  if (st.top == -1) {
    return 1;
  } else {
    return 0;
  }
}

int isFull(struct Stack st) {
  if (st.top == st.size - 1) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  struct Stack st;

  Create(&st);

  push(&st, 20);
  push(&st, 30);
  push(&st, 40);
  push(&st, 50);

  Display(st);

  printf("Popped = %d\n", pop(&st));

  Display(st);

  printf("Peek(2) = %d\n", peek(st, 2));
  printf("Stack Top = %d\n", stackTop(st));
  printf("Is Empty = %d\n", isEmpty(st));
  printf("Is Full = %d\n", isFull(st));

  return 0;
}
