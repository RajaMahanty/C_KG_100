#include <stdio.h>

int main()
{
    float b, h;
    printf("enter base: ");
    scanf("%f", &b);
    printf("enter height: ");
    scanf("%f", &h);
    float a = 0.5 * b * h;
    printf("\nArea of the triangle with base: %.2f and height: %.2f is: %.2f", b, h, a);
    return 0;
}
