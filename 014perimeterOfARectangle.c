#include <stdio.h>

int main()
{
    float a, b, c, d;
    printf("Enter first side: ");
    scanf("%f", &a);
    printf("Enter second side: ");
    scanf("%f", &b);
    printf("Enter third side: ");
    scanf("%f", &c);
    printf("Enter fourth side: ");
    scanf("%f", &d);
    printf("The perimeter of the rectangle is: %f", (a + b + c + d));
    return 0;
}
