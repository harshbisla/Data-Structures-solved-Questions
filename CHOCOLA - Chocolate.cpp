#include<bits/stdc++.h>
using namespace std;
int cost(int *bx,int *by ,int x,int y)
{
	sort(by,by+(y-1));
	sort(bx,bx+(x-1));
	
        int i=0,j=0;
        int cost = 0;
        int hz=1,vz=1;
        while(i<x && j<y)
        {
            if(bx[i]>by[j])
            {
                cost += vz*bx[i];
                hz++;
                i++;
            }
            else
            {
                cost += hz*by[j];
                vz++;
                j++;
            }
        }
        while(i<x)
        {
            cost += vz*bx[i];
            i++;
        }
        while(j<y)
        {
            cost += hz*by[j];
            j++;
        }
        return cost;
    }

int main()
{
	int x,y;
	cout<<"Enter Horizontal boxes of chocolate"<<endl;
	cin>>x;
	cout<<"Enter vertical boxes of chocolate"<<endl;
	cin>>y;
	int bx[x-1];
	int by[y-1];
	cout<<"Enter value to break vertically i.e. x values"<<endl;
	for(int i=0;i<x-1;i++)
	{
		cin>>bx[i];
	}
	cout<<"Enter value to break horizontally i.e. y values"<<endl;
	for(int i=0;i<y-1;i++)
	{
		cin>>by[i];
	}
	cout<<"The minimum cost to break the chocolates in square of equal size is "<<cost(bx,by,x,y)<<endl;
}
