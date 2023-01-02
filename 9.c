#include<stdio.h>
#include<math.h>
int prime(int a,int b)
{
	int i,n,x=0;
	for(i=a;i<=b;i++)
	{
		for(n=2;n<=sqrt(i);n++)
		{
			if(i%n==0)
			{
				++x;
				break;
			}
		}
		if(x==0)
		{
			printf("%i",i);
		}
		x=0;
	}
	return 0;
}
int main()
{
	int i,j;
	printf("enter the numbers in between which you want to check prime numbers");
	scanf("%i %i",&i,&j);
	prime(i,j);
	return 0;
}
