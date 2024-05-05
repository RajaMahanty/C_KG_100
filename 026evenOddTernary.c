#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter numer: ");
    scanf("%d", &num);
    num = num % 2 ? printf("Odd\n")
                  : printf("Even\n");
    return 0;
}
