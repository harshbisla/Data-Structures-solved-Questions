#include<stdio.h>
#include<math.h>
int dtb(int n)
{   int b=0,a,pos=0;
	while(n>0)
	{
		a=n%2;
		b+=a*pow(10,pos);
		n=n/2;
		pos++;
	}
	return b;
}
int main()
{
	int n;
	printf("enter the decimal number");
	scanf("%i",&n);
	printf("the binary number after conversion is %i",dtb(n));
}
