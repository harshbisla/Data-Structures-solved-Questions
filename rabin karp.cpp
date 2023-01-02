#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;
int ff(int x,string s,int n)
{
	int f=0;
	for(int i=x;i<n;i++)
	{
		f=f+s[i]-'a';
	}
	return f;
}
void search(string p ,string q)
{
	int a=ff(0,q,q.size());
	for(int i=0;i<=p.size()-q.size();i++)
	{
		if(ff(i,p,q.size())==a)
		{
			for(int j=0;j<q.size();j++)
			{
				if(p[i+j]==q[j])
				{
					if(j==q.size()-1)
					{
						cout<<"pattern found at index "<<i+j+1;
					}
					continue;
				}
				else
				{
					break;
				}
				
			}
		}
		
	}
}
int main() 
{ 
    string p = "GEEKS FOR GEEKS"; 
    string 	q = "GEEK";
      search(p,q); 
    return 0; 
} 
