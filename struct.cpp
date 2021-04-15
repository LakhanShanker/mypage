#include<stdio.h>
struct Dir
{
    char name[20];
    int num;
};
int main()
{
int n,i,j;
    scanf("%d",&n);
  struct  Dir d[n];
   for(i=0;i<n;i++)
   {
       gets(d[i].name);
       scanf("%d",&d[i].num);
   }
   char nam[20];
   printf("1\n");
   scanf("%d",&j);
   gets(nam);
for(i=0;i<n;i++)
   {
       if(nam==(d[i].name))
        puts(nam);
       printf("=%d",d[i].num);

   }

   return 0;
}
