#include<stdio.h>
int  main()
{
	for (int i=0;i<5;i++)
	{
		if(i==0)
		{
			for(int j=0;j<5;j++)
			{
				if(j==1|j==3)
				printf(" *");
				else
				printf(" ");
			}
			printf("\n");
		}
		if(i==1)
		{
			for(int j=0;j<5;j++)
			{
				if(j==0)
				printf(" *");
				if(j==4)
				printf("*");
				if(j==2)
				printf("*");
				else
				printf(" ");
			}
			printf("\n");
		}
		if(i==2)
		{
			for(int j=0;j<5;j++)
			{
				if(j==1)
				printf("* ");
				if(j==1)
				printf("   *");
				else
				printf(" ");
			}
			printf("\n");
		}
		if(i==3)
		{
			for(int j=0;j<5;j++)
			{
				if(j==1|j==3)
				printf(" *");
				else
				printf(" ");
			}
			printf("\n");
		}
		if(i==4)
		{
			for(int j=0;j<5;j++)
			{
				if(j==2)
				printf(" *");
				else
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
