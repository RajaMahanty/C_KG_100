#include <stdio.h>

int main()
{
    int age = -1;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0 || age > 117)
    {
        printf("Enter valid age!\n");
        return -1;
    }
    else
    {
        if (age > 60)
        {
            printf("Senior\n");
        }
        else if (age <= 60 && age > 20)
        {
            printf("Adult\n");
        }
        else if (age <= 20 && age > 13)
        {
            printf("Teen\n");
        }
        else
        {
            printf("Child\n");
        }
    }
    return 0;
}

//* Child -> below 13
//* Teen -> below 20
//* Adult -> below 60
//* Senior -> above 60