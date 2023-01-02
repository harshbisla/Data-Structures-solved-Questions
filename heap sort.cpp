#include<iostream.h>
using namespace std;
//basically thr use of heapify function is to nake the bottom three into heap starting from index i 
void heapifydown(int *a,int n, int i)//i is the index for which we have to maintain the heap property
{
	int largest=i;
	int l=2*i;
	int r=2*i+1;
	if(l<=n && a[l]>a[largest])
	{
		largest =l;
	}
	if(r<=n && a[r]>a[largest])
	{
		largest =r;
	}
	if(largest!=i)
	{
		swap(a,i,largest);
		heapify(a,n,largest);
	}
}
void buildheap(int *a,int n)
{
	for(int i=n/2;i>0;i--)
	{
		heapifydown(a,n,i);
	}
}

//heapsort
//step 1 - convert array into heap
//step 2 - max heap has a property that the top element
//is the max element hence by removing element one by one 
//wecan obtain sorted array
void heapsort(int * a,int n)
{
	for(int i=n;i>1;i--)
	{
		swap(a,1,i);
		heapify(a,i-1,1);
	}
}
