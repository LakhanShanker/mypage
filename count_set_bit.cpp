#include<stdio.h>
int  main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    while(n>0){
        cnt+=n&1;
        n=n>>1;
    }
    printf("%d",cnt);
    return 0;
}

