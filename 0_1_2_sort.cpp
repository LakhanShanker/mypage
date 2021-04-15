#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],i=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        int t=n;
        while(t-->0){
    for(i=0;i<n-1;i++)
    {
        if(a[i]==1&&a[i+1]==0)
        {
            a[i]-=1;
            a[i+1]+=1;
        }
        else if(a[i]==2&&a[i+1]==1)
        {
            a[i]-=1;
            a[i+1]+=1;
        }
        else if(a[i]==2&&a[i+1]==0)
        {
            a[i]-=2;
            a[i+1]+=2;
        }
    }
        }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
