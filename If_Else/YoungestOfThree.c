#include<stdio.h>
int main()
{
    int a;
    printf("Enter the age of Ram :");
    scanf("%d",&a);
    int b;
    printf("Enter the age of Shyam :");
    scanf("%d",&b);
    int c;
    printf("Enter the age of Ajay :");
    scanf("%d",&c);
    if(a<b && a<c)
    {
        printf("Ram is youngest",a);
    }
    if(b<a && b<c)
    {
        printf("Shyam is youngest",b);
    }
    if(c<a && c<b)
    {
        printf("Ajay is youngest",c);
    }
    return 0;
}