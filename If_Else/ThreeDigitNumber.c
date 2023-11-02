#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("It is a Three Digit Number");
    }
    else
    {
        printf("It is not a Three Digit Number");
    }
    return 0;
}