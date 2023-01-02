#include<iostream>
using namespace std;


void printarray(int *A,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
}



void bubblesort(int *A,int n)
{
	int issorted=0;
	int t;
	for(int i=0;i<n-1;i++)
	{
		issorted=1;
		
		for(int j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
				issorted=0;
				
			}
		}
		if(issorted)
		{
			return;
		}
	}
}



int main()
{
	int A[]={12,34,5,67,4,7};
	int n=6;
	printarray(A,n);//before sorting 
	bubblesort(A,n);//sort func
	cout<<"After sorting in ascending order"<<endl;
	printarray(A,n);//after sorting 
	
	
}
