#include<stdio.h>
int main()
{
    int i,j,n,ma;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        ma=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>ma)
            ma=a[i];
        }
        int b[ma+1];
        for(i=0;i<=ma;i++)
        {
            b[i]=0;
        }
        for(i=0;i<n;i++)
        {
            b[a[i]]+=1;
        }
        int m=b[0],d;
        for(i=0;i<=ma;i++)
        {
            if(b[i]>m)
            {
                m=b[i];
                d=i;
            }
        }
        printf("The element is: %d count %d",d,m);
        return 0;
}
