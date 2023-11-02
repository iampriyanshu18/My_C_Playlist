#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter The Dividend :");
    scanf("%d",&a);
    printf("Enter The divisor :");
    scanf("%d",&b);
    int q = a/b;
    int r = a - b*q; // Divisor * Quotient + Remainder = Dividend
    printf("The Remainder when %d is divided by %d is : %d",a,b,r);
    return 0;
}