#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
  int size;
  int top;
  char *S;
};

void push(struct Stack *st, char x) {
  if (st->top == st->size - 1) {
    printf("Stack Overflow\n");
  } else {
    st->top++;
    st->S[st->top] = x;
  }
}

char pop(struct Stack *st) {
  char x = '\0';

  if (st->top == -1) {
    printf("Stack Underflow\n");
  } else {
    x = st->S[st->top];
    st->top--;
  }

  return x;
}

int isBalanced(char *exp) {

  struct Stack st;

  st.size = strlen(exp);
  st.top = -1;
  st.S = (char *)malloc(st.size * sizeof(char));

  for (int i = 0; exp[i] != '\0'; i++) {

    if (exp[i] == '(') {
      push(&st, exp[i]);
    }

    else if (exp[i] == ')') {

      if (st.top == -1) {
        return 0;
      }

      pop(&st);
    }
  }

  if (st.top == -1) {
    return 1;
  } else {
    return 0;
  }
}

int main() {

  char exp[] = "((a+b)*(c-d))";

  if (isBalanced(exp)) {
    printf("Balanced\n");
  } else {
    printf("Not Balanced\n");
  }
}
