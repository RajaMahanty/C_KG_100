#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    float floating = number;
    printf("\nOriginal no: %d", number);
    printf("\nFloat converted no: %f", floating);
    printf("\nFloat converted no: %f", (float)number);
    return 0;
}