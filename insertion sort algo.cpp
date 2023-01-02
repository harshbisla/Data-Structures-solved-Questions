#include<iostream>
using namespace std;


void print(int *A,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
}

void insertionSort(int *A, int n)
{
	int key=1;
	int x;
	for(int i=1;i<=n-1;i++)//loop for passe
	{
		//loop for each pass
		
		for(int j=i;j>0;j--)
		{
			if(A[j]<A[j-1])
			{
				x=A[j];
				A[j]=A[j-1];
				A[j-1]=x;
			}
		}
	}
}

int main()
{
	//insertion sort
	int A[]= {12,34,56,3,66,6};
	int n=6;
	print(A,n);
	insertionSort(A,n);
	cout<<"After insetion sort the sorted arraay is"<<endl;
	print(A,n);
}
