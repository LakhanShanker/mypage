#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    scanf("%d",&i);
    int c=n^i;
    while(c>0){
        cnt+=c&1;
        c=c>>1;
    }
    printf("%d",cnt);

}
