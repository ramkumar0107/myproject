#include<stdio.h>
void main()
{
    int n;
    char a,b;
    printf("enter n value \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n*2;j++)
        {
            if(j=n)
            {
            printf("* ");
            }
            else
            {
            printf("  ");  
            }
        }
        printf("\n");
    }
}
