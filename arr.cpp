#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a,j=0;
    double b;
    char str[50],ps;
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%[^\n]%*c",str);
    printf("%d\n",a+i);
    double z=b+d;
    printf("%.1lf\n",z);
    printf("%s",str);
    return 0;
}
