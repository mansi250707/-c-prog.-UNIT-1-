#include <stdio.h>

int main()
{
    float a, b, c, average;

    printf("Enter 1st number: ");
    scanf("%f", &a);

    printf("Enter 2nd number: ");
    scanf("%f", &b);

    printf("Enter 3rd number: ");
    scanf("%f", &c);

    average = (a + b + c) / 3.0;

    printf("average = %.2f\n", average);

    return 0;
}
