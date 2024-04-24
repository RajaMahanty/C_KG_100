#include <stdio.h>

int main(int argc, char const *argv[])
{
    const float PI = 3.14159;
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("The circumference of your circle is: %f", 2 * PI * radius);
    return 0;
}
