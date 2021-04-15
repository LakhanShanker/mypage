#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int a[n],j=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]<0){
                if(i!=j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        j++;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
}
