#include<stdio.h>

void aslamualaikum();
void goodmorning();

int main()
{
    printf("enter m for muslim and n for non muslim:");
    char ch;
    scanf("%c", &ch);

    if(ch == 'm') {
        aslamualaikum();
    } else {
        goodmorning();
    }
}


void aslamualaikum(){
    printf("aslamualaikum /n");
}
void goodmorning(){
    printf("goodmorning");
}