#include<stdio.h>
int main(){
    int A[13] = {1,2,3,4,5,7,8,9,10};
    for(int i = 0; i < 5; i++){
        printf("%d\n",A[i]);
    }
    printf("%zu\n",sizeof(A));
    printf("%d\n",A[11]);
    return 0;
}
