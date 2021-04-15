#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int* nums, int numsSize){
    int max=nums[0],i,j=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
            max=nums[i];
    }
    int *a=(int*)malloc(sizeof(max+1));
    for(i=0;i<max+1;i++)
        a[i]=0;
    for(i=0;i<numsSize;i++)
    {
        a[nums[i]]+=1;
    }
    for(i=0;i<numsSize;i++)
        nums[i]=0;
    for(i=0;i<max+1;i++)
    {
        if(a[i]>0)
            nums[j++]=i;
    }

    return j;

}
int main()
{
    int n,result;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        result=removeDuplicates(a,n);
    printf("%d, ",result);
    printf("[");

    for(int i=0;i<result-1;i++)
        printf("%d,",a[i]);
        printf("%d",a[result-1]);
        printf("%]");

}
