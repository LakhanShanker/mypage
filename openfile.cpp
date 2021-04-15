#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr=fopen("newmyfile.txt","r");

    while((c=fgetc(ptr))!=EOF)
    {
        printf("%c",c);
    }
    fclose(ptr);
}
