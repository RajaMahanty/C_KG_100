#include <stdio.h>

int main()
{
    float f,c;
    printf("Enter fahrenheit: ");
    scanf("%f", &f);

    c = (f-32) * 5.0/9.0;
    printf("%.2f F deg = %.2f C deg",f,c);
    return 0;
}