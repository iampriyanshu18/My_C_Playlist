#include<stdio.h>
int main()
{
    int n=12345;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=0;
    int LastDigit=0;
    while(n!=0)
    {
        LastDigit=n%10;
        sum=sum+LastDigit;
        n=n/10;
    }
    printf("The sum of digit is %d",sum);
    return 0;
}