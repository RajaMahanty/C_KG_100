#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks (out of 500): ");
    scanf("%d", &marks);
    if (marks > 500)
    {
        printf(("Enter valid marks!!!\n"));
        return -1;
    }
    float per = marks / 500.0 * 100.0;
    if (per > 90.0)
    {
        printf("Percentage: %.2f\n", per);
        printf("Grade: A\n");
    }
    else if (per > 75.0)
    {
        printf("Percentage: %.2f\n", per);
        printf("Grade: B\n");
    }
    else if (per > 60.0)
    {
        printf("Percentage: %.2f\n", per);
        printf("Grade: C\n");
    }
    else if (per > 30)
    {
        printf("Percentage: %.2f\n", per);
        printf("Grade: D\n");
    }
    else
    {
        printf("Percentage: %.2f\n", per);
        printf("Grade: F\n");
    }
    return 0;
}