#include <stdio.h>
struct rectangle {
  int length;
  int breadth;
};

int area(struct rectangle r1) { return r1.length * r1.breadth; }

int main() {
  struct rectangle r = {5, 2};
  printf("%d", area(r));
}
