#include<stdio.h>

int sumofdigit(int);

int main(){
    int num;
    printf("enter the number:");
    scanf("d", &num);

    int sum = sumofdigit(num);
    printf("sum of digit is %d is %d",num,sum);
    return 0;

    }
int sumofdigit(int n){
    if(n == 0)
    return 0;
    int dig =n % 10;
    return dig+ sumofdigit(n/10);
}