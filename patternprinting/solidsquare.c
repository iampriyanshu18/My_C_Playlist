#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows & columns:");
    scanf("%d",&n);
    // ***...upto n number
    for(int i=1;i<=n;i++)  //outer loop -> no. of lines 
    {
        printf("*");
        {
            printf("\n");
        }    
    }
    printf("\n");
    return 0;
}