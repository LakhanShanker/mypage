#include<stdio.h>
int main()
{
	int t,a,b,n,c,d,i;
	scanf("%d",&t);// take number of cases
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&n);//taking number of ram, mohan,turns
		for(i=0;i<n;)
		{
			a=a*2;
			n--;
			if(n>0)
			b=b*2;
			n--;

		}

		c=a;
		d=b;
		if(c>d)//condition for maximum(c,d)/min(c,d)
		{
			printf("%d\n",c/d);
		}
		else
		{
			printf("%d\n",d/c);
		}
	}
}
