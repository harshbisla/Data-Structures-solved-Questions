#include<iostream>
using namespace std;

void print(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}

void selectionsort(int *a,int n)
{
	int indexofmin;
	cout<<"Running selection sort"<<endl;
	for(int i=0;i<n-1;i++)
	{
		indexofmin=i; 
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[indexofmin])
			{
				indexofmin=j;
			}
		}
		int temp=a[i];
		a[i]=a[indexofmin];
		a[indexofmin]=temp;
		
	}
	
}


int main()
{
	int a[]={12,3,5,23,56,88};
	int n=6;
	print(a,n);
	selectionsort(a,n);
	cout<<"Afer sorting by selection sort"<<endl;
	print(a,n);
}
