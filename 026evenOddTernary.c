#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter numer: ");
    scanf("%d", &num);
    num = num % 2 ? 0 : 1;
    if (num == 0)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }

    return 0;
}
