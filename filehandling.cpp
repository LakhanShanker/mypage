#include<stdio.h>
int main()
{
    FILE *ptr;
    char name[20];
    int rlo;
    ptr=fopen("newmyfile.txt","a");
    printf("Enter rollno");
    scanf("%d",&rlo);
    fprintf(ptr,"Id: %d\n",rlo);
    printf("Enter name");
    scanf("%s",name);
    fprintf(ptr,"Name: %s\n",name);

    fclose(ptr);
    printf("--------Data added successfully---------");
}
