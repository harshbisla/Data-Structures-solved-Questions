#include<iostream>
using namespace std;
int max(int * height,int n)//return the position at which max element is located
{
	
	int m=0;
	for(int i=1;i<n;i++)
	{
		if(height[i]>height[m])
		{
			m=i;
		}
	}
	return m;
	
}
int trap(int * height,int n)
{
	int copy[n];//for making duplicate of height
	for(int i=0;i<n;i++)
	{
		copy[i]=height[i];
	}
	int x=0;
	int m=max(height,n);
	for(int i=0;i<m;i++)
	{
		for(int j=i;j<m;j++)
		{
			if(height[j]>copy[j])
			{
				break;
			}
			if(copy[j]<copy[i])
			{
				height[j]=height[i];
			}
		}
	}
	for(int i=n-1;i>m;i--)
	{
		for(int j=i;j>m;j--)
		{
			if(height[j]>copy[j])
			{
				break;
			}
			if(copy[j]<copy[i])
			{
				height[j]=height[i];
			}
		}
	}
	int f=0;
	for(int i=0;i<n;i++)
	{
		f=f+(height[i]-copy[i]);
	}
	return f;
	
}
int main()
    {
    	int n;
	cout<<"Enter the size"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter height of each block"<<endl;
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	cout<<trap(a,n);	
	}
    
