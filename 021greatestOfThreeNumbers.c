#include <stdio.h>

int main()
{
    int num1, num2, num3, gnum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    gnum = num1 > num2 ? num1 > num3 ? num1 : num3 : num2 > num3 ? num2
                                                                 : num3;
    printf("The greatest among %d, %d and %d is >>> %d", num1, num2, num3, gnum);
    return 0;
}