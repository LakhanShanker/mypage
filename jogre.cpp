#include<stdio.h>
int main()
{
    int x,y,z,i,j,sum=0;
    scanf("%d%d%d",&x,&y,&z);
    int a[x],b[x],c[x];
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<x;i++)
        scanf("%d",&b[i]);
        for(i=0;i<x;i++)
        {
            if(a[i]>b[i])
                c[i]=a[i];
            else
                c[i]=b[i];
        }
        for(i=0;i<x;i++)
        sum+=c[i];
        printf("%d",sum);
}
