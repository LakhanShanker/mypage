#include<stdio.h>
int main()
{
    int n,cnt,i,x;
    printf("Enter size");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            x=i;
            cnt=0;
        while(x>0){
            cnt+=x&1;
            x=x>>1;
        }
        printf("%d\n",cnt);
    }

}
