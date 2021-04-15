#include<stdio.h>
int main()
{
    int n,cnt=0,i=0;
    scanf("%d",&n);
    while(n>0)
    {
        cnt=n&1;
        if(cnt==1)
            printf("%d\n",i);
        n=n>>1;
        i++;
    }

}
