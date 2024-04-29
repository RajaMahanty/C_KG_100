#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t;
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);
    float ci = p*(pow((1+r/100),t));
    printf("\ncompound interest: %.2f", ci);
    return 0;
}