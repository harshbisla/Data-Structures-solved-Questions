//reversing a string using recursion
#include<iostream>
using namespace std;
char reverse(string s,int i)
{
	if(i<0)
	{
		return -1;
	}
	else
	{
		cout<<s[i-1];
		reverse(s,i-1);
	}
	
}
int main()
{
	string s;
	cout<<"Enter string";
	cin>>s;
	cout<<reverse(s,s.size());
	return 0;
}
