#include<stdio.h>
#include<math.h>
int btd(int n)
{int b=0,a,pos=0;
	//1001
	while(n>0)
	{  
	   a=n%10;
	   b+=(pow(2,pos))*a;
	   n=n/10;
	   pos++;	
	}
	return b;
}
int main()
{
	printf("Enter the binary number");
	int n;
	scanf("%i",&n);
	printf("The decimal no. after conversion is %i",btd(n));
}
