#include<stdio.h>
void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int mini=a[i];
        int j=i-1;
        while(j>=0&&a[j]>mini){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=mini;
    }
   for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    InsertionSort(a,n);

}
