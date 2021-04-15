#include<stdio.h>
int main()
{
    int t;
    int n;
    int i,sum=0;
    scanf("d",&t);
    while(t>0)
    {

        scanf("%d",&n);
        int a[n];

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        if(sum%2==0)
            printf("2");
        else
            printf("1");
        t--;
    }
}
