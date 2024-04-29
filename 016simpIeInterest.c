#include <stdio.h>

int main()
{
    float p, r, t;
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("\nsimple interest: %.2f", (p * r * t) / 100);
    return 0;
}