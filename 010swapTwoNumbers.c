#include <stdio.h>
int main(int argc, char const *argv[])
{
    int first, second, temp;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("\nEnter second number: ");
    scanf("%d", &second);

    // Swapping
    temp = first;
    first = second;
    second = temp;

    printf("\nFirst number: %d", first);
    printf("\nSecond number: %d", second);

    return 0;
}
