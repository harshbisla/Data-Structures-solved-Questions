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
int main()
{
	int n,r;
	printf("enter the value of n\n");
	scanf("%i",&n);
	printf("enter the value of r\n");
	scanf("%i",&r);
	printf("nCr= %i",(fact(n))/((fact(n-r))*(fact(r))));
	return 0;
	
}
