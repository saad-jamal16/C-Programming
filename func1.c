#include<stdio.h>
//declaration/prototype
void printHello();
void printGoodbye();

int main()
{
    printHello(); //function call
    printGoodbye();
    return 0;
}

//function defination
void printHello(){
    printf("hello");
}
void printGoodbye(){
    printf("Goodbye :)\n");
}