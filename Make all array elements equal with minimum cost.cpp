#include<iostream>
#include<math.h>
using namespace std;
int min_cost(int *a,int n)
{
    int y;
    if(n%2==1)
    {
    	y=a[n/2];
	}
	else
	{
		y=(a[(n/2)-1]+a[n/2])/2;
	}
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s+abs(a[i]-y);
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<min_cost(arr,n);
}
