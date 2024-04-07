#include<stdio.h>
int main()
{
    // "workbench.colorTheme": "Default Dark Modern",
    // "terminal.integrated.mouseWheelScrollSensitivity": 1000,
    // "editor.mouseWheelZoom": true,
    // "code-runner.clearPreviousOutput": true,
    // "code-runner.runInTerminal": true
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            if(a==0) a=1;
            else a=0;
        }
        printf("\n");
    }
    return 0;
}




#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}