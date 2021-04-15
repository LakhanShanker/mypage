#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    char ch1[20];
    int x,y;
    printf("Enter String\n");
    scanf("%[^\n]c",ch);
    x=strlen(ch);
    printf("%d\n",x);
    printf("Enter second string\n");
    getchar();
    scanf("%[^\n]c",ch1);
    strcpy(ch,ch1);
    printf("%s\n",ch);
    y=strcmp(ch,ch1);
    if(y==0)
        printf("Equal strings\n");
    else
        printf("Not Equal strings\n");
    strrev(ch);
    printf("%s\n",ch);
    strupr(ch1);
    printf("%s\n",ch1);
}
