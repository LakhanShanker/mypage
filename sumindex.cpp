#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number you want sum of:");
    scanf("%d",&m);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<m)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==m)
                {
                    printf("%d %d",i,j);
                    break;
                }

            }

        }

    }
    return 0;

}
