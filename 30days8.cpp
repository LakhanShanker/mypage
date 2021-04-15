#include<stdio.h>
int main()
{
    int a[10],b[10];
    b[0]=0;
    int i,j,k=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {

        for(j=i;j<10;j++)
        {
            if(a[j]=='1')
            {
                b[k]=b[k]+1;
            }
            else
                break;
        }
        k++;
    }
    int mi=b[0];
    for(i=0;i<=k;i++)
    {
        if(b[i]>mi)
            mi=b[i];
    }
    printf("%d",mi);
    return 0;
}
