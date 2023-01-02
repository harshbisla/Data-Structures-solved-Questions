#include<stdio.h>
int main()
{
	int i,j,r,c;
	scanf("%i%i",&r,&c);
	for(i=1;i<=r;i++)
	{
		if(i==1||i==r)
		{
		    for(j=1;j<=c;j++)
		    {
		    	printf("*");
			
		    }
		    
			}
		    else
		    {
		        for(j=1;j<=c;j++)
		        {
		        	if(j==1||j==c)
		        	{
		        		printf("*");
					}
					else
					{
						printf(" ");
					}
				}
		    }
			printf("\n");
	}
}
