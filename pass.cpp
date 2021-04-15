
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void check(char a[]);
main()
{
    int t;
    char a[30];
    scanf("%d",&t);
    while(t--)
    {
    scanf("%s",a);
    check(a);
    }



}
void check(char a[])
{
    char c;
    int len,i,flag5=0,flag1=0,flag2=0,flag3=0,flag4=0;
    len=strlen(a);
    if(len<10)
    flag1=1;
    else
    {
        for(i=0;i<len;i++)
        if((a[i]>=48&&a[i]<=58))
        {
            flag2=0;

            break;
        }
        else
        flag2=1;
        for(i=1;i<len-1;i++)
        if((a[i]>=0&&a[i]<=9))
        {
            flag5=0;

            break;
        }
        else
        flag5=1;

        for(i=0;i<len;i++)
        if((a[i]>=65&&a[i]<=90))
        {
            flag3=0;

            break;
        }
        else
        flag3=1;

        for(i=0;i<len;i++)
        if(a[i]=='#'||a[i]=='@'||a[i]=='?'||a[i]=='&'||a[i]=='%')
        {
            flag4=0;

            break;
        }
        else
        flag4=1;


    }
    if(flag1==1||flag1==5||flag2==1||flag3==1||flag4==1)
    printf("NO\n");
    else
    printf("YES\n");


    return;
}
