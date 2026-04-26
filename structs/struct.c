#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
    char x; //its actual size is 1 but the will treat as 4 ; to make it accessible ezily
};

struct rectangle r1;
int main(){
   // struct rectangle r1 = {2,3};
    r1.length = 10;
    r1.breadth = 16;
    printf("length of rectangle = %d\n",r1.length);
    printf("breadth of rectangle = %d\n",r1.breadth);
    printf("Area of rectangle = %d\n",r1.length*r1.breadth);
    printf("%zu\n", sizeof(r1));
    return 0;
}
