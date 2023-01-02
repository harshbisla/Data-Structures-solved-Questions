#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter rows and columns"<<endl;
	cin>>m>>n;
	char arr[m][n];
	//noww------------------------------------
	int sr=0;
	int sc=0;
	int er=m-1;
	int ec=n-1;
	int x;
	int y=0;
	while(sr<=er && sc<=ec)
	{
		x=sc;
		while(x!=ec)
		{
			if(y%2==0)
				arr[sr][x]='O';
			else
				arr[sr][x]='X';
			x++;
		}
			if(y%2==0)
				arr[sr][x]='O';
			else
				arr[sr][x]='X';
		x=sr;
		
		while(x!=er)
		{
			if(y
			%2==0)
				arr[x][ec]='O';
			else
				arr[x][ec]='X';
			x++;
		}
			if(y%2==0)
				arr[x][ec]='O';
			else
				arr[x][ec]='X';
		x=ec;
		
		while(x!=sc)
		{
			if(y%2==0)
				arr[er][x]='O';
			else
				arr[er][x]='X';
			x--;
		}
			if(y%2==0)
				arr[er][x]='O';
			else
				arr[er][x]='X';
		x=er;
		
		while(x!=sr)
		{
			if(y%2==0)
				arr[x][sc]='O';
			else
				arr[x][sc]='X';
			x--;
		}
		y++;
		sc++;
		er--;
		ec--;
		sr++;
		
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
