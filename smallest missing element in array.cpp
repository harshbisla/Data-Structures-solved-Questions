#include<stdio.h>
int main()

{
	int n,x=0,i;
	printf("enter the no of elements in array\n");
	scanf("%i\n",&n);
	printf("enter the elements of array\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%i\n",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
		    x++;                      // of x is matching with element of array then x is increased by 1 
		}
		
	}
	printf("Smallest missing element is %i",x);
}
