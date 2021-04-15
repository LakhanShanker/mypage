
#include <stdio.h>
int main()
{
    int a,b,num,den,gcd,lcm,r;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        num=a;
        den=b;
    }
    else
    {
        num=b;
        den=a;
    }
    r=num%den;
    while(r>0)
    {
        num=den;
        den=r;
        r=num%den;
    }
    gcd=den;
    lcm=(a*b)/gcd;
    printf("%d     %d",gcd,lcm);
}
