#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Enter first float: ");
    scanf("%f", &num1);
    printf("Enter second float: ");
    scanf("%f", &num2);
    printf("The product of %f and %f is: %f", num1, num2, num1 * num2);
    printf("\nThe product of %f and %f is: %.2f", num1, num2, num1 * num2);
    return 0;
}
