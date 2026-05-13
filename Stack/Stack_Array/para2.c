#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
  int size;
  int top;
  char *S;
};

void push(struct Stack *st, char x) {
  st->top++;
  st->S[st->top] = x;
}

char pop(struct Stack *st) {
  char x = st->S[st->top];
  st->top--;
  return x;
}

int match(char a, char b) {
  if (a == '(' && b == ')')
    return 1;
  if (a == '[' && b == ']')
    return 1;
  if (a == '{' && b == '}')
    return 1;
  return 0;
}

int isBalanced(char *exp) {

  struct Stack st;
  st.size = strlen(exp);
  st.top = -1;
  st.S = (char *)malloc(st.size * sizeof(char));

  for (int i = 0; exp[i] != '\0'; i++) {

    if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
      push(&st, exp[i]);
    }

    else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {

      if (st.top == -1)
        return 0;

      char x = pop(&st);

      if (!match(x, exp[i]))
        return 0;
    }
  }

  if (st.top == -1)
    return 1;
  else
    return 0;
}

int main() {

  char exp[] = "{([a+b]*[c-d])/e}";

  if (isBalanced(exp))
    printf("Balanced\n");
  else
    printf("Not Balanced\n");
}
