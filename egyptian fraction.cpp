#include<bits/stdc++.h>
#include <cmath>
using namespace std;
void egyfra(int n,int d)
{
	if(n==0)
	{
		cout<<"0";
		return ;
	}
//	if(n%d==0)
//	{
//		cout<<n/d<<endl;
//	}
//	if(d%n==0)
//	{
//		cout<<"1/"<<n/d;
//	}
	if(n<d)
	{
		int c=ceil(float(d)/float(n));
		cout<<"1/"<<c<<" + "<<" ";
//		n=(n*c)-d;
//		d=d*c;
		return egyfra((n*c)-d,d*c);
	}
}
int main()
{
	int n,d;
	cout<<"Enter the numerator and denominator off fraction"<<endl;
	cin>>n>>d;
	cout<<"Entered fraction is "<<n<<"/"<<d<<endl;
//	cout<<"Egyptian Fraction Representation of "<<n<<"/"<<d<<" is"<<egyfra(n,d);
	egyfra(n,d);
}
