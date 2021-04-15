#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int i=0;
    while(n>0){
        i=n%2;
        n=n/2;
        if(i==1)
            sum++;
    }
    printf("%d",sum);
}
