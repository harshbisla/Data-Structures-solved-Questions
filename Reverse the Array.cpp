#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
}
void rev(int * a,int n)
{
		for(int i=0;i<n/2;i++)
		swap(a[i],a[n-i-1]);

}
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	rev(a,5);
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
