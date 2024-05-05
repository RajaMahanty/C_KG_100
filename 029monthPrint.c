#include <stdio.h>
int main(int argc, char const *argv[])
{
    int month;
    printf("Enter month: ");
    scanf("%d", &month);
    if (!(month > 0 && month < 13))
    {
        printf("Enter valid month!!!\n");
        return -1;
    }
    else
    {
        
    }

    return 0;
}
