#include<iostream>
using namespace std;
int x=0;
int balancedBTs(int h)
{
	//x++;
	if(h==0)
	{
		return 0;
	}
	if(h==1)
	{
		return 1;
	}
	//now we have too check for 3 cases and add all the 3 cases
	// t0 get the desired output
	//3 cases are of thaat tree is balanced tree
	int lt1,lt2,lt3;
	int rt1,rt2,rt3;
	lt1=balancedBTs(h-1);
	lt2=balancedBTs(h-1);
	lt3=balancedBTs(h-2);
	rt1=balancedBTs(h-1);
	rt2=balancedBTs(h-2);
	rt3=balancedBTs(h-1);
	x=x+(lt1+lt2+lt3+rt1+rt2+rt3);
	return x;
}
int main()
{
	cout<<balancedBTs(2);
}
