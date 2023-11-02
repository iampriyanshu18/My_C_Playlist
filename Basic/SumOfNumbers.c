#include <stdio.h>
int main()
{
    int x;
    printf("enter first number\n");
    scanf("%d",&x);
    int y;
    printf("enter second number\n");
    scanf("%d",&y);
    int sum = x + y;
    printf("%d\n",sum);
    int subtract = x - y;
    printf("%d\n",subtract);
    int mul = x * y;
    printf("%d\n",mul);
    int div = x / y;
    printf("%d\n",div);
    return 0;
}