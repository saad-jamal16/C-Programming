#include<stdio.h>

int calcPercentage(int science, int math, int hindi);

int main(){
    int science = 90;
    int math = 92;
    int hindi = 80;

    printf("percentage is : %d", calcPercentage(science, math, hindi));
    return 0;


}

int calcPercentage(int science, int math, int hindi){
    return ((science + math + hindi) / 3);
}