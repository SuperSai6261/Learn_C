#include<stdio.h>
#include<stdlib.h>

struct rectangle{
    int length;
    int breadth;
};

int main(){
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p -> length = 5;
    p -> breadth = 10;
    printf("length = %d \n", p -> length);
    printf("breadth = %d \n" , p -> breadth);
    return 0;
}

