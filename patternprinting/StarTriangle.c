#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)//This loop is responsible for printing 1 2 3 4....upto n
        {
            printf("* ");
        }
        printf("\n");
    }    
    return 0;
}