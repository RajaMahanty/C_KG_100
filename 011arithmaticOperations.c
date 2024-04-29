#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nThe results of all arithmatic operation's are: \n\n");
    printf("\t%d + %d = %d\n", num1, num2, (num1 + num2));
    printf("\t%d - %d = %d\n", num1, num2, (num1 - num2));
    printf("\t%d * %d = %d\n", num1, num2, (num1 * num2));
    printf("\t%d / %d = %d\n", num1, num2, (num1 / num2));
    printf("\t%d modulo %d = %d\n", num1, num2, (num1 % num2));
    return 0;
}
