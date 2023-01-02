#include<iostream>
#include<stdlib.h>
//done it myself proud of it
using namespace std;

void print(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		
		cout<<a[i]<<endl;
	}
}
int max(int *a,int n)
{
	int m;
	m=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
		else
		{
			continue;
		}
		
	}
	
	return m;
}


void countsort(int *a,int n)
{
	int c=0;
	int x=max(a,n)+1;
	int *arr=(int*) malloc((x)*sizeof(int));
	for(int i=0;i<n;i++)
	{
		arr[i]=0;
	}
	for(int k=0;k<x;k++)//for arr
	{
		for(int j=0;j<n;j++)//for a
		{
			if(a[j]==k)
			{
				arr[k]++;
			}
		}
	}
	for(int  l=0;l<x;l++)
	{
		while(arr[l]>0)
		{
			a[c]=l;
			c++;
			arr[l]--;
		}
		
	}
	free(arr);
}
int main()
{
	int a[]={1,4,6,7,2};
	int n=5;
	print(a,n);
	countsort(a,n);
	cout<<"after sorting"<<endl;
	print(a,n);
	

	
}
