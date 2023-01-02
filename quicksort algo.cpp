//quiksort algorithm
#include<iostream>
using namespace std;

void print(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		
		cout<<a[i]<<endl;
	}
}

int partition(int *a,int low,int high)
{
	int pivot=a[low];
	int i=low +1;
	int j=high;
	int temp;
	
	
    do
	{
		while(a[i]<=pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
		    temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
	while(i<j);
	
	temp=a[low];
	a[low]=a[j];
	a[j]=temp; 
	
	return j;
}

void quicksort(int *a,int low, int high)
{
	int partitionindex;
	if(low<high)
	{
	    partitionindex=partition(a,low,high);
	    quicksort(a,low,partitionindex-1);
	    quicksort(a,partitionindex+1,high);
    }
}
int main()
{
	int a[]={12,3,45,6,7};
	int n=5;
	print(a,n);
	quicksort(a,0,n-1);
	cout<<"after sorting"<<endl;
	print(a,n);
}
