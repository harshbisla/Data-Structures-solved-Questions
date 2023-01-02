#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the no of elements in the array\n");
	scanf("%i",&n);
	int a[n];
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%i\n",&a[i]);
	}
	
	//select first element aand search its recurrence

	for(i=0;i<n;i++)            
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			
				printf(" the element that is repeated first occured at position %i\n",i);
				break;
				break;
			}
		}
	}
	
}
