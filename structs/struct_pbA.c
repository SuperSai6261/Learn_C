#include <stdio.h>

struct rectangle {
  int length;
  int breadth;
};

void changeLength(struct rectangle *r, int l) { r->length = l; }

int main() {
  struct rectangle r = {6, 3};
  changeLength(&r, 10);
  printf("%d", r.length);
  return 0;
}
