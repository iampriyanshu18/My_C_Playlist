#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter number of colomns:");
    scanf("%d",&m);
    // ***...upto n number
    for(int i=1;i<=n;i++)  //outer loop -> no. of lines
    {
        for(int i=1;i<=m;i++) //inner loop -> no. of stars in each line
        {
            printf("*");
        }    
            printf("\n"); //hr line ke baad enter marne ke liye hai
    }
    printf("\n");
    return 0;
}