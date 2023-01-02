#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no of days isyana opens theme park;");
	scanf("%i",&n);
	int a[n];
	printf("Enter the number of customers visiting the theme park in respective days\n");
	for(i=0;i<n;i++)
	{
		printf("Customers on day %i\n",i+1);
		scanf("%i",&a[i]);
	}
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j] && a[i]>a[i+1])
			{
				printf("%i is record breaking day\n",i+1);
			}
		}
	}
	if(a[0]>a[1])
	{
		printf("1 is record breaking day\n");
	}
	for(i=0;i<n-1;i++)
	{
	    if(a[n-1]>a[i])
	    {
	    	printf("%i is the record breaking day\n",n);
		}
    }
}
