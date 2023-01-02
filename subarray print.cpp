#include<stdio.h>
int main()
{
	int n,j=0,i,k;
	printf("Enter the number of elements in your array\n");
	scanf("%i",&n);
	int a[n];
	printf("Enter the elements in your array\n");
	for(i=0;i<n;i++)
	{
		scanf("%i",&a[i]);
	}
	while(j<n)
	{
		k=1;
	while(k<=n)
	{
		for(i=j;i<k;i++)
		{
			printf("%i",a[i]);
		}
		printf("\n");
		k++;    
    }
        
        j++;    
    }
    
	}
