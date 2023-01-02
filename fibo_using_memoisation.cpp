#include<iostream>
using namespace std;
//int fibo_helper(int n ,int *arr)
//{
//	if(n<=1)
//	{
//		return n;
//	}
//	if(arr[n]!=-1)
//	{
//		return arr[n];
//	}
//	int a=fibo_helper(n-1,arr);
//	int b=fibo_helper(n-2,arr);
//	arr[n]=a+b;
//	return arr[n];
//}
////THIS IS MEMOISATION USING RECURSION
//int fibo_memo(int n)
//{
//	int arr[n+1]; 
//	for(int i=0;i<=n;i++)
//	{
//		arr[i]=-1;
//	}
//	return fibo_helper(n,arr);
//}
////FIBO_3 IS MEMOISTION WITHOUT USING RECURSION INSTREAD WE USE ITERATIVE APPROACH
//// THIS IS BOTTOM UP APROACH ALSO KNOWN AS DYNAMIC PROGRAMMING
//int fibo_3(int n)
//{
//	int *arr=new int[n+1];
//	arr[0]=0;
//	arr[1]=1;
//	
//	for(int i=2;i<=n;i++)
//	{
//		arr[i]=arr[i-1]+arr[i-2];
//	}
//	return arr[n];
//}
int minsteps_1_dp(int n)
{
	int *a=new int[n+1];
	a[1]=0;
	a[2]=1;
	a[3]=1;
	for(int i=4;i<=n;i++)
	{
		int x=INT_MAX;
		int y=INT_MAX;
		if(i%2==0)
			x=a[i/2];
		if(i%3==0)
			y=a[i/3];
//		int z=minsteps_1_dp(n-1);
		a[i]=1+min(a[i-1],min(x,y));
	}
	return a[n];
}
int minsteps_1(int n)
{
	if(n==1)
	{
		return 0;
	}
	int x=INT_MAX;
	int z=INT_MAX;
	int y=INT_MAX;
	x=minsteps_1(n-1);
	if(n%2==0)
		y=minsteps_1(n/2);
	if(n%3==0)
		y=minsteps_1(n/3);
	return 1+min(x,min(y,z));
	
}
int main()
{
	cout<<minsteps_1_dp(10);
}





