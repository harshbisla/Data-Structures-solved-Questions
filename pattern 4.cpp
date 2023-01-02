#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
			
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}


}
