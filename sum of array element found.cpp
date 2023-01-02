#include<stdio.h>
int main()
{
	int n,i,j,k,b=0;
	printf("enter the elements you want in your array");
	scanf("%i",&n);
	int a[n];
	printf("enter the elements of your array");
	for(i=0;i<n;i++)
	{
		scanf("%i",&a[i]);
	}
	printf("enter the element you want too find whether sum exists");
	scanf("%i",&k);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
		        b++;
			}
			else
			{    
				continue;
			}
		}
	}
	if(b=0)
	{
		printf("not possible");
		
	}
	else
	{
		printf("possible");
	}
}
