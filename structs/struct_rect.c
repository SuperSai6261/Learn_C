#include <stdio.h>

struct rectangle {
  int length;
  int breadth;
};

void initialize(struct rectangle *p, int l, int b) {
  p->length = l;
  p->breadth = b;
  printf("Length = %d\n", p->length);
  printf("breadth = %d\n", p->breadth);
}

int area(struct rectangle *p) { return p->length * p->breadth; }

void changeLength(struct rectangle *p, int l) { p->length = l; }

int main() {
  struct rectangle r;
  int l = 23;
  initialize(&r, 10, 20);
  int ar = area(&r);
  changeLength(&r, l);
  printf("length of rectangle = %d", r.length);
}
