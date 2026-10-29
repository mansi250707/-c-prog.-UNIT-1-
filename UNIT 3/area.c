
#include <stdio.h>

void area()
{
    float base, height, result;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    result = 0.5 * base * height;

    printf("Area of triangle = %.2f\n", result);
}

int main()
{
    area();

    return 0;
}
