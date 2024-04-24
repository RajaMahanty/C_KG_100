#include <stdio.h>

int main(int argc, char const *argv[])
{
    const float PI = 3.14159;
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("The area of your circle is: %f", PI * radius * radius);
    return 0;
}
