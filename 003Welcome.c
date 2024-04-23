#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[25];
    printf("Enter your name: ");
    scanf("%19s", name);
    printf("Welcome %s to Balarampur", name);
    return 0;
}
