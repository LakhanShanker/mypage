#include <stdio.h>

int main(void) {
       int a;
       while(a!=42)
       {
              scanf("%d",&a);
              if(a==42)
              break;
              printf("%d\n",a);
       }
	return 0;
}


