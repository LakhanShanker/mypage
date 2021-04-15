#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int maxpro=1;
    int maxi=1;
    for(int i=0;i<n;i++){
        maxi*=a[i];
        if(maxpro<maxi)
            maxpro=maxi;
        if(maxi<=0)
            maxi=1;
    }
    printf("%d",maxpro);
}
