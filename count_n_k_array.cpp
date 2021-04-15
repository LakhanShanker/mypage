#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter k");
    scanf("%d",&k);
    int m=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m)
        m=a[i];
    }
    int y=m+1;
    int *b=(int*)malloc(y*sizeof(int));
    for(int i=0;i<y;i++)
        b[i]=0;
    for(int i=0;i<n;i++)
        b[a[i]]+=1;
    int x=n/k;
    for(int i=0;i<y;i++)
        if(b[i]>=x)
        printf("%d\t",i);
return 0;
}
