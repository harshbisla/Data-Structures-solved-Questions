#include<iostream>
using namespace std;
long staircase(int n)
{
	int x=0;
	int *arr=new int[n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i]=0;
    }
	for(int i=1;i<=n;i++)
	{
        int x=1;
        while(x<=i && x<=3)
        {
		    arr[i]+=arr[i-x];
            x++;
        }
        if(i==1 ||i==2 ||i==3)
        {
        	arr[i]+=1;
		}
	}
	return arr[n];
}

int main()
{
	cout<<staircase(4);
	
}
