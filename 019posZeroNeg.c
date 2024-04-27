#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Given no. is positive.");
    }
    else if (num < 0)
    {
        printf("Given no. is negative.");
    }
    else
    {
        printf("Given no. is zero.");
    }
    return 0;
}