#include<stdio.h>

int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5; // x=5
    printf("x = %d\n", x); //5
    printf("*ptr = %d\n", *ptr);//5

    
    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);


    return 0;


}