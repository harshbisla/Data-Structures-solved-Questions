#include<iostream>
using namespace std;
int edit_distance(string s,string t)
{
	
	int m=s.size();
	int n=t.size();
	//if size of any of string is 0 , return 0
	if(m=0  || n==0)
	{
		return 0;
	}
	if(s[0]==t[0])
	{
		return edit_distance(s.substr(1),t.substr(1));
	}
	else if(s[0]!=t[0])
	{
		 return 1+edit_distance(s.substr(1),t.substr(1));
	}
	
}
int main()
{
	string s,t;
	s="abcd";
	t="axdze";
	cout<<edit_distance(s,t);
	
}
