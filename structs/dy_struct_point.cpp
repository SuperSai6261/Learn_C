#include <iostream>
#include <stdlib.h>

struct rectangle {
  int length;
  int breadth;
};

struct rectangle *fun() {
  struct rectangle *p;
  p = new struct rectangle;
  p->length = 15;
  p->breadth = 23;
  return p;
}

int main() {
  struct rectangle *r = fun();
  std::cout << r->length << std::endl;
  std::cout << r->breadth << std::endl;
  return 0;
}
