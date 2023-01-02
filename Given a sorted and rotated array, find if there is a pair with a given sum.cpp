#include<iostream>
using namespace std;
bool p(int *arr, int n , int x)
{
	int s;
	int e;
	for(int i=0;i<n;i++)
	{
		if(arr[i+1]<arr[i])
		{
				s=i+1;
				e=i;
		}
	
	}
	while(s!=e)
	{
		if(arr[s]+arr[e]==x)
		{
			return true;
		}
		else if (arr[s]+arr[e]>x && e!=0)
		{
			e--;
		}
		else if (arr[s]+arr[e]>x && e==0)
		{
			e=n-1;
		}
		else if (arr[s]+arr[e]<x && s!=n-1)
		{
			s++;
		}
		else if (arr[s]+arr[e]<x && s==n-1)
		{
			s=0;
		}
	}
	return false;
	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int x;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<p(arr,n,x);
}
