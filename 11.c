#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int c(int n,int r)
{
	return ((fact(n))/((fact(n-r))*(fact(r))));
}
int main()
{
	int i,j,n;
	printf("enter the value of n\n");
	scanf("%i",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%i\t",c(i,j));
		}
		printf("\n");
	}
}
