#include<stdio.h>
sum(int n)
{
	int i,sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
		
	}
	return sum;
}
int main()
{
	int n;
	scanf("%i",&n);
	printf("the sum of n natural numbers upto %i is %i",n,sum(n));
}
