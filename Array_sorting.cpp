#include<stdio.h>
void Bul(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
void Ins(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
     {
         key=a[i];
         j=i-1;
    while(j>=0&&a[j]>key)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
}
void Sel(int a[],int n)
{
    int mi,i,j,temp;
    for(i=0;i<n-1;i++)
    {
        mi=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[mi])
            {
                mi=j;
            }

        }
        temp=a[i];
        a[i]=a[mi];
        a[mi]=temp;
    }
}
void show(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int i;
    int n;
    printf("Enter size of Array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    show(a,n);
    Sel(a,n);
    printf("\n");
    show(a,n);
}
