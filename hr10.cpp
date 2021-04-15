#include<stdio.h>
void arr(int a[],int n)

{int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
  printf("\n");
}
void sot(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            temp=a[j];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }

}
int main()
{int n;
    printf("Enter size");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    arr(a,n);
    sot(a,n);
    arr(a,n);
    return 0;
}
