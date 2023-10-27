#include<stdio.h>
int main()
{
    int x;
    printf("Enter first number:\n");
    scanf("%d",&x);
    int y;
    printf("Enter second number:\n");
    scanf("%d",&y);
    int sum=x+y;
    printf("%d\n",sum);
    int subtract=x-y;
    printf("%d\n",subtract);
    int multiply=x*y;
    printf("%d\n",multiply);
    int divide=x/y;
    printf("%d\n",divide);
    return 0;
}