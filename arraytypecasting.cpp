#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter size of square matrix\n");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter a matrix\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    printf("Enter b matrix\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf(" sum matrix/n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }


}
