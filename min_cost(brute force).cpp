#include<iostream>
#include<climits>
using namespace std;
int min(int x, int y, int z) {

  int smallest = 99999;

  if (x < smallest)
    smallest=x;
  if (y < smallest)
    smallest=y;
  if(z < smallest)
    smallest=z;

  return smallest;
}
/////////////MEMONISATION////////////////////////

//int min_cost(int arr[3][4], int m,int n,int i,int j)
//{
//	//our objective is to calculate minimum cost to reach from(0,0)
//	// to (m-1,n-1)
//	int sol[3][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0}};
//	min_cost(arr,sol,m,n,i,j);
//
//}
////////////MEMOISATION/////////////////////////////
//int min_cost(int arr[5][6],int sol[5][6],int m,int n,int i,int j)
//{
//	if(m<=i || n<=j)
//	{
//		return INT_MAX;
//	}
//	if(m-1==i && n-1==j)
//	{
//		sol[i][j]=arr[m-1][n-1];
//		return sol[i][j];
//	}
//	if(sol[i+1][j]==0)
//	sol[i+1][j]=min_cost(arr,sol,m,n,i+1,j);
//	if(sol[i][j+1]==0)
//	sol[i][j+1]=min_cost(arr,sol,m,n,i,j+1);
//	if(sol[i+1][j+1]==0)
//	sol[i+1][j+1]=min_cost(arr,sol,m,n,i+1,j+1);
//	return arr[i][j]+min(sol[i+1][j],sol[i][j+1],sol[i+1][j+1]);
//}
///////DYNAMIC PROGRAMMING/////////////////////////////////
int min_cost(int arr[5][6],int m,int n,int i,int j)
{
	if(m<=i || n<=j)
	{
		return INT_MAX;
	}
	int ans[5][6]; //={{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1}};
	ans[m-1][n-1]=arr[m-1][n-1];
	//lets fill the last row
	for(int j=n-2;j>=0;j--)
	{
		ans[m-1][j]=arr[m-1][j]+ans[m-1][j+1];
	}
	//lets fill the last column
	for(int i=m-2;i>=0;i--)
	{
		ans[i][n-1]=arr[i][n-1]+ans[i+1][n-1];
	}
	for(int i=m-2;i>=0;i--)
	{
		for(int j=n-2;j>=0;j--)
		{
			ans[i][j]=min(ans[i+1][j],ans[i][j+1],ans[i+1][j+1])+arr[i][j];
		}
	}
	return ans[0][0];
	
}
//	while(i<m &&j<n)
//	{
//		if(arr[i+1][j]==min(arr[i+1][j],arr[i][j+1],arr[i+1][j+1]))
//		{
//			s=s+arr[i+1][j];
//			i++;
//		}
//		else if(arr[i][j+1]==min(arr[i+1][j],arr[i][j+1],arr[i+1][j+1]))
//		{
//			s=s+arr[i][j+1];
//			j++;
//		}
//		else if(arr[i+1][j+1]=min(arr[i+1][j],arr[i][j+1],arr[i+1][j+1]))
//		{
//			s=s+arr[i+1][j+1];
//			i++;
//			j++;
//		}
//	}
//	return s;
//}
int main()
{
	//int **arr= new int[3][4];
    int arr[5][6]={
	                {9 ,6 ,0 ,12 ,90 ,1},
                    {2 ,7, 8, 5 ,78 ,6},
                    {1, 6 ,0 ,5 ,10, -4}, 
                    {9, 6, 2 ,-10 ,7 ,4},
                    {10, -2, 0, 5, 5 ,7}
				  };
   // int sol[5][6]={{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};
	cout<<min_cost(arr,5,6,0,0);
    //cout<<min_cost(arr,3,4,0,0);
}
