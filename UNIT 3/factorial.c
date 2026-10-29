
#include <stdio.h>

long int factorial(int n)
{
    int i;
    long int fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;
    long int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial of %d = %ld\n", num, result);

    return 0;
}
