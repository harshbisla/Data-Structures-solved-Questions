#include<iostream>
#include<math.h>
using namespace std;
//BRUTE FORCE////////////////////////////////////////////////////
//using recursion///////////////////////////////////////////////
//int x=999;
//int minCount(int n)
//{
//	if(n==1)
//	{
//		return 1;
//	}
//    for(int i=1;i<=sqrt(n*n);i++)
//    {
//    	int y=1+minCount(n-(i*i));
//    	if(y<=x)
//    	x = y;
//	}
//	return x;
//}
///////////////MEMONISATION////////////////////////////////////
int minCount(int n,int *arr)
{
	if(n==0 || n==1)
	{
		arr[n]=1;
		return arr[n];
	}
	
	
}
int minCount(int n)
{
	int *arr=new int[n+1];
	for(int i=0;i<=n;i++)
	{
		arr[i]=0;
	}
	minCount(n,arr);
}
int main()
{
	cout<<minCount(12);
}
