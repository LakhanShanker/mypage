#include<stdio.h>
int main()
{
    long n,i=1;
    printf("Enter number for square root");
    scanf("%ld",&n);
    while(i*i<=n){
        i++;
    }
    printf("The square root of %ld is %ld",n,i-1);

}
