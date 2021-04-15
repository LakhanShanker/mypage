#include<stdio.h>
int main()
{
    FILE *ptr;
    char name[20];
    char ch;
    ptr=fopen("ext.txt","a");
    printf("Enter name\n");
    gets(name);
    fprintf(ptr,"%s\n",name);
    printf("---------------Data addded------------\n");
    fclose(ptr);
ptr=fopen("ext.txt","r");
while((ch=getc(ptr))!=EOF)
    printf("%c",ch);
fclose(ptr);
}
