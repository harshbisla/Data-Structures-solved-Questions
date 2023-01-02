#include <bits/stdc++.h>
//approach 1 we can makke subarrays and check the difference //not optimal
//approach 2 we can sort the array and then selecct the subarray with least difference  
//approach 2 is correct
using namespace std;
int chocolate(int *a,int n,int m)
{
	sort(a,a+n);
	int d=INT_MAX;
	for(int i=0;i<=n-m;i++)
	{
		d=min(d,a[i+m-1]-a[i]);
	}
	return d;
}
int main()
{
	int n,m;
	cout<<"Enter the number of students"<<endl;
	cin>>m;
	cout<<"Enter the  no. of packets "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the no. of chocolates in each packet"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Minimum Difference is "<< chocolate(a,n,m)<<endl;
}
