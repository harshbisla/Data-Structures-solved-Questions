#include<stdio.h>
int main()
{
	int i,c=0,r,rem=0;
	printf("no of rupees ");
	scanf("%i",&r);
	while(r!=0)
	{
	for(i=1;i<=r;i++)
	{
		c++;
	}
	rem=r%3;
	r=(r+rem/3);
    }
    printf("The no. of chocolates he ate are %i",c);
    return 0;
}
