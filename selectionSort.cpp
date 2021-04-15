#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++){
        int minimum=i;
        for(int j=i+1;j<n;j++)
         {
             if(a[j] < a[minimum])
                minimum=j;
         }
        int temp=a[minimum];
        a[minimum]=a[i];
        a[i]=temp;
}
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}
