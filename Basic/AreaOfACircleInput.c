#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius :");
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("%f",area);
    return 0;
}