#include<stdio.h>
int main()
{
    int a,b,cnt=0;
    scanf("%d%d",&a,&b);
    while(a>=b){
        a-=b;
        cnt++;
    }
    printf("%d",cnt);
}
