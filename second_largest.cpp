#include<stdio.h>
int main()
{
    int a[10],n,i=0,r;
    printf("Enter number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
        i++;
    }
    int x=i;
    int y,j;
    printf("%d",x);
    printf("\n");
     for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
            if(a[j]>a[j+1])
        {
            y=a[j];
            a[j]=a[j+1];
            a[j+1]=y;
        }
    }
    for(i=0;i<x;i++)
    printf("%d",a[i]);

    return 0;
}
