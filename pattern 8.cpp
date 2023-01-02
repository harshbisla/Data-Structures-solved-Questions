#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%i",&n);
	for(i=1;i<=(3);i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i+j)%4==0 || (i==2 && (i+j)%4==2))
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
