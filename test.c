#include <stdio.h>

int main() {
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    int sum = a + c + x + c + ((int)dx) + ax + a + x + s + b + ax + b + s + c + ax + c + ax + ux;

    printf("sum of a + c, x + c, (int)dx + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux is: %d\n", sum);
    return 0;
}
