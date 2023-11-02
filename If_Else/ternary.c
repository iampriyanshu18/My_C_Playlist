#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // ternary operator
    // exp1 ? exp2 : exp3
    n%2==0 ? printf("even number") : printf("odd numcer") ;
    // if(n%2==0)
    //     printf("even number");
    // else
    //     printf("odd numcer");
    return 0;
}