#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, min;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    min = num1 < num2 ? num1 : num2;
    printf("minimum of %d and %d is %d\n", num1, num2, min);
    return 0;
}
