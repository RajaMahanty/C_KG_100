#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter integer: ");
    scanf("%d", &num);
    num = num <= 0 ? -num
                   : num;
    printf("Absolute value of the given integer is: %d\n", num);
    return 0;
}
