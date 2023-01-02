#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(2*n);j++)
		{
			if(j<=i || j>=((2*n)+1-i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
    }	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=(2*n);j++)
		{
			if(j<=i || j>=((2*n)+1-i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	
	
	
}
