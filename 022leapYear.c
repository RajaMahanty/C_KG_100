#include <stdio.h>

int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);

    // Checking leapyear
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Leap year!\n");
            }
            else
            {
                printf("Not leap year!\n");
            }
        }
        else
        {
            printf("Leap year!\n");
        }
    }

    return 0;
}