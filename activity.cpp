#include<iostream>
using namespace std;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n,int x[],int y[]) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
        {
        	swap(&arr[j], &arr[j+1]);
			swap(&y[j], &y[j+1]);
			swap(&x[j], &x[j+1]);
		}
}


int main()
{
	int n;
	cout<<"Enter no. of activities"<<endl;
	cin>>n;
	int a[n],st[n],et[n];
	for(int i=0;i<n;i++)
	{
		a[i]=i;
	}
	cout<<"Enter time"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter starting time of Activity "<<i+1<<endl;
		cin>>st[i];
		cout<<"Enter ending time of Activity "<<i+1<<endl;
		cin>>et[i];
	}
	bubbleSort(et,n,st,a);
	//TILL HERE SORTING DONE ON BASIS OF END TIME
	
	cout<<"A"<<a[0]+1<<" ";
	int s=0;
	int e=et[0];
	int i=1;
	while(i<n)
	{
		if(st[i]>e)
		{
			cout<<"A"<<a[i]+1<<" ";
			e=et[i];
		}
		i++;
	}
	
	
}
