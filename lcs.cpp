#include<iostream>
#include<string>
using namespace std;
/////RECURSION/////BRUTE FORCE//////////////////////////////
//int lcs(string s,string t)
//{
//	//base case
//	if(s.size()==0 ||t.size()==0)
//	{
//		return 0;
//	}
//	//recursive calls 
//	if(s[0]==t[0])
//	{
//		return 1+lcs(s.substr(1),t.substr(1));
//	}
//	else
//	{
//		int a=lcs(s.substr(1),t);
//	    int b=lcs(s,t.substr(1));
//	    int c=lcs(s.substr(1),t.substr(1));
//	    return max(a,max(b,c));
//	}
//}
////////MEMOISATION////////////////////////////////////
//int lcs(string s,string t,int **ans )
//{
//	if(s.size()==0 || t.size()==0)
//	{
//		return 0;
//	}
//	int m = s.size();
//	int n = t.size();
//	if(ans[m][n]!=-1)
//	{
//		return ans[m][n];
//	}
//	if(s[0]==t[0])
//	{
//		ans[m-1][n-1]=lcs(s.substr(1),t.substr(1),ans);
//		ans[m][n]=1+ans[m-1][n-1];
//	}
//	else
//	{
//		ans[m][n-1]=lcs(s,t.substr(1),ans);
//		ans[m-1][n]=lcs(s.substr(1),t,ans);
//		ans[m][n]=max(ans[m][n-1],ans[m-1][n]);
//	}
//	return ans[m][n];
//}
//int lcs(string s,string t)
//{
//	int m=s.size();
//	int n=t.size();
//	int **ans=new int*[m+1];
//	for(int i=0;i<=m;i++)
//	{
//		ans[i]=new int [n+1];
//		for(int j=0;j<=n;j++)
//		{
//			ans[i][j]=-1;
//		}
//	}
//	return lcs(s,t,ans);
//}
///////DYNAMIC PROGRAMMING/////////////////////////////////////	
int lcs(string s ,string t)
{
	int m=s.size();
	int n=t.size();
    int **ans=new int*[m+1];
    for(int i=0;i<=m;i++)
    {
    	ans[i]=new int[n+1];
	}
	//filling first row
    for(int j=0;j<=n;j++)
    {
    	ans[0][j]=0;
	}
	//filling first column
	for(int i=0;i<=m;i++)
    {
    	ans[i][0]=0;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s[n-i]=t[n-j])
			{
				ans[i][j]=1+ans[i-1][j-1];
			}
			else
			{
				ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
			}
		}
	}
	return ans[m][n];
}

int main()
{
	string s,t;
	s="abcdg";
	t="hdhajfhj";
	cout<<lcs(s,t);
}
