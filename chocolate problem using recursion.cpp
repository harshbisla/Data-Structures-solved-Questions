#include<stdio.h>
int noc( int ,int,int);
int main()
{
	int c,w,m;
	printf("enter the money a child has\n");
	scanf("%i",&m);
	printf("enter the cost of a chocolate\n");
	scanf("%i",&c);
	printf("enter the no. of wrappers required to buy a chocolate\n");
	scanf("%i",&w);
	printf("the no of chocolates boy can eat are %i",noc(m,c,w));
}
int noc( int m,int c,int w)
{
	if(m==0)
	{
		m+=0;
	
	}
	else
	{
	m=m/c;
	m+=noc(m,w,w);
	
    }
    return m;
}
