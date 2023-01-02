#include<iostream>
using namespace std;
void pd(int *a[],int m,int n)
{
	
}
int main()
{
	int m,n;
	cout<<"Enter rows and columns you e=want in matrix"<<endl;
	cin>>m>>n;
	int a[m][n];
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	pd(a,m,n);//to print array diagnol wise
}
