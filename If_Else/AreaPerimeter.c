#include<stdio.h>
int main()
{
    int l;
    printf("Enter length:");
    scanf("%d",&l);
    int b;
    printf("Enter breadth:");
    scanf("%d",&b);
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter)
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Area is not greater than perimeter");
    }
    return 0;
}