#include <stdio.h>
int main()
{
    float radius,area,pie;
    const float pi = 3.1415;
    printf("Enter radius:");
    scanf("%f", &radius);
    area = pi*radius*radius;
    printf("Area of circle = %f",area);
    return 0;


}
