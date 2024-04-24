#include <stdio.h>

int main(int argc, char const *argv[])
{
    int side;
    printf("Enter Length of side: ");
    scanf("%d", &side);
    printf("The area of your square is: %d", side * side);
    return 0;
}
