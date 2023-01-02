#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
			
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
	    }
	    if(i>1)
	    {
	    	for(j=1;j<i;j++)
	    	{
	    		printf("*");
			}
		}
		printf("\n");
	}
		
		for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
			
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
	    }
	    if(i>1)
	    {
	    	for(j=1;j<i;j++)
	    	{
	    		printf("*");
			}
		}
		printf("\n");
	}


}
