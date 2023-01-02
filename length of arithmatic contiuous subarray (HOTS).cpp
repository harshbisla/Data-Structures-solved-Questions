#include<stdio.h>
int main()
{
	int i,n;
	int count=2,pg;
	printf("enter no if elements in your array");
	scanf("%i",&n);
	int a[n];
	printf("enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%i",&a[i]);
	}
	pg=a[1]-a[0];
	for(i=2;i<n;i++)
	{
		if(a[i]-a[i-1]==pg)
		{
			count++;
		}
		else
		{
			pg=a[i]-a[i-1];
		}
		
	}
		printf("length of continuous subarray is %i",count);
}
