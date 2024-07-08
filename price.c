#include<stdio.h>

void calculatePirce(float value);

int main()
{
    float value = 100.0;
    calculatePrice(value);
    return 0;

}
void calculatePrice(float value){
    value = value + (0.18*value);
    printf("final price is : %f", value);
}

void calculatePirce(float value);
