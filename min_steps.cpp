#include<iostream>
using namespace std;
///////////////////BRUTRE FORCE////////////////////////////
int min(int x, int y, int z) {

  int smallest = 99999;

  if (x <= smallest)
    smallest=x;
  if (y <= smallest)
    smallest=y;
  if(z <= smallest)
    smallest=z;

  return smallest;
}
//int x=0;
//int ms(int n)
//{
//	int a,b,c;
//	if(n==1)
//	{
//		return x;
//	}
//	if(n%2==0 && n%3==0)
//	{
//		x=1+min(ms(n-1),ms(n/2),ms(n/3));
//	}
//	else if(n%2==0 && n%3!=0)
//	{
//		x=1+min(ms(n-1),ms(n/2));
//	}
//	else if(n%2!=0 && n%3==0)
//	{
//		x=1+min(ms(n-1),ms(n/3));
//	}
//}
///////////////////////////////////////////////////////
///////////////MEMOISATION//////////////////////////////
//it is a top down approach hence we have to create an array and hence 
//store the recurring values in it
//int ms_mem(int n,int *arr)
//{
//	if(n==1)
//	{
//		arr[n]=0;
//		return arr[n];
//	}
//	if(n%3==0 && n%2==0)
//	arr[n]=1+min(ms_mem(n-1,arr),ms_mem(n/2,arr),ms_mem(n/3,arr));
//	else if(n%3!=0 && n%2==0)
//	arr[n]=1+min(ms_mem(n-1,arr),ms_mem(n/2,arr));
//	else if(n%3==0 && n%2!=0)
//	arr[n]=1+min(ms_mem(n-1,arr),ms_mem(n/3,arr));
//	
//	return arr[n];
//}
//int ms(int n)
//{
//	int *arr=new int[n];
//	for(int i=1;i<=n;i++)
//	{
//		arr[i]=9999;
//	}
//	ms_mem(n,arr);
//}
////////////////////////////////////////////////////////////////////
///////////DYNAMIC PROGRAMMNG//////////////////////////////////////
int ms_dp(int n)
{
	int *arr=new int[n];
	arr[1]=0;
	arr[2]=1;
	arr[3]=1;
	for(int i=4;i<=n;i++)
	{
		if(i%3==0 && i%2==0)
		    arr[i]=1+min(arr[i-1],arr[i/2],arr[i/3]);
	    else if(i%3!=0 && i%2==0)
	        arr[i]=1+min(arr[i-1],arr[i/2]);
	    else if(i%3==0 && i%2!=0)
	    arr[i]=1+min(arr[i-1],arr[i/3]);
	    else if(i%3!=0 && i%2!=0)
	    arr[i]=1+arr[i-1];
	}
	return arr[n];
}
///////////////////////////////////////////////////////////////
int main()
{
	cout<<ms_dp(12);
}
