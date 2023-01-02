#include<iostream>
using namespace std;
void print(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
void merge(int *a,int low,int mid, int high)
{
	int i,j,k;
	int b[high+1];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		k++;
		j++;
	}
	for(int x=low;x<=high;x++)
	{
		a[x]=b[x];
	}
}
void mergesort(int *a,int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main()
{
	int a[] ={4,66,5,8,33,67};
	int n=6;
	print(a,n);
	mergesort(a,0,n-1);
	cout<<"after sorting "<<endl;
	print(a,n);
}
