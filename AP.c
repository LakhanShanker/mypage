#include <stdio.h>
#include <stdlib.h>

int main(){

int A,B,C,t;

scanf("%d",&t); \\taking number of cases

while(t--){

 scanf("%d %d %d",&A,&B,&C);  \\taking three integer

if(B-A==C-B) \\checking condition

printf("0 \n");

else{

if((((B-A)%2==0)&&((C-B)%2==0))||(((B-A)%2==1)&&((C-B)%2==1)))

printf("%d \n",((abs(2*B-A-C))/2));

else

printf("%d \n",(((abs(2*B-A-C)-1)/2)+1));

}

}

}
