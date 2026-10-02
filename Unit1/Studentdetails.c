#include <stdio.h>
int main()
{ 
    int Age;
    float Height;
    char Name[20];
    char div[10];

    printf("Enter your name:");
    scanf("%s", &Name);


    printf("Enter your age:");
    scanf("%d", &Age);
        
    printf("Enter your division:");
    scanf("%s", &div);
    
    printf("Enter your height:");
    scanf("%f", &Height);    
        
    printf("Name = %s\n", Name);
    printf("Age = %d\n", Age);
    printf("Div = %s\n", div);
    printf("Height = %.2f\n", Height);

    return 0;
}
