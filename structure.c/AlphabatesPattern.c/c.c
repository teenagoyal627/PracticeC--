#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter the number  ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=n/2+1;j++)
    {
        if(i==1||i==n||j==1)
        {
            printf(" * ");
        }
        else
        printf(" ");
    }
    printf("\n");
}

return 0;
}