#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    marks > 80    ? printf("High!\n")
    : marks >= 50 ? printf("Moderate!\n")
                  : printf("Low!\n");
    return 0;
}