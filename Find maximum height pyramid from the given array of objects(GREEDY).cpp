#include<bits/stdc++.h>
using namespace std;
int height(int *a,int n)
{
	sort(a,a+n);
	int l=0;
	int s;
	int mx=0;
	int i=0;
	int ms=0;
	int x=0;
	while(i<n)
	{
		if(i==0)
		{
			s=a[0];
			l++;
			x++;
		}
		else
		{
			ms+=a[i];
			mx+=1;
			if(ms>s && mx>x)
			{
				x=mx;
				s=ms;
				l++;
			} 
		}
		if(n-i-1<=mx)
		{
			break;
		}
		i++;
	}
	return l;

}
int main()
{
	int n ;
	cout<<"Enter the no. of elements"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the value of objects"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The max height possible is "<<height(a,n)<<endl;

}
