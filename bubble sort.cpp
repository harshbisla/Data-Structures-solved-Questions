// bubble sort
#include<stdio.h>
int main()
{
	int n,i,x;
	printf("Enter no of elements in array \n");
	scanf("%i",&n);
	int a[n];
	printf("enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%i",&a[i]);	
	}
	for(int j=1;j<n;j++)
	{
		
	
	for(i=1;i<n-j+1;i++)
	{
	    if(a[i-1]>=a[i])
	    {
	    	x=a[i];
	    	a[i]=a[i-1];
	    	a[i-1]=x;
		}
	}
    }
    for(i=0;i<n;i++)
	{
		printf("%i",a[i]);	
	}
}
