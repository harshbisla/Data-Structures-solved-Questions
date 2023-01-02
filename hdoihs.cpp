#include<iostream>
#include<string>
using namespace std;
void removeChar(string str, char charToRemmove)
{
    int i, j;
    int len = str.size();
    for(i=0; i<len; i++)
    {
        if(str[i] == charToRemmove)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }  
}

int fu(string s)
{
	int sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='w')
		{
			sum+=2;
			removeChar(s,'t');
			removeChar(s,'w');
			removeChar(s,'o');
		}
		else if(s[i]=='u')
		{
			sum=sum+4;
			removeChar(s,'f');
			removeChar(s,'o');
			removeChar(s,'u');
			removeChar(s,'r');
		}
		else if(s[i]=='g')
		{
			sum=sum+8;
			removeChar(s,'e');
			removeChar(s,'i');
			removeChar(s,'g');
			removeChar(s,'h');
			removeChar(s,'t');	
		}
		else if(s[i]=='r')
		{
			sum=sum+3;
			removeChar(s,'t');
			removeChar(s,'h');
			removeChar(s,'r');
			removeChar(s,'e');
			removeChar(s,'e');	
		}
		else if(s[i]=='x')
		{
			sum=sum+6;
			removeChar(s,'s');
			removeChar(s,'i');
			removeChar(s,'x');
		}
	}
	for(int i=0;i<s.size();i++)//now 1 5 7 9
	{
		if(s[i]=='s')
		{
			sum=sum+7;
			removeChar(s,'s');
			removeChar(s,'e');
			removeChar(s,'v');
			removeChar(s,'e');
			removeChar(s,'n');	
		}
		if(s[i]=='o')
		{
			sum=sum+1;
			removeChar(s,'o');
			removeChar(s,'n');
			removeChar(s,'e');
		}	
	}
	for(int i=0;i<s.size();i++)//now 5 9
	{
		if(s[i]=='v')
		{
			sum=sum+5;
			removeChar(s,'f');
			removeChar(s,'i');
			removeChar(s,'v');
			removeChar(s,'e');
		}
		if(s[i]=='n')
		{
			sum=sum+9;
			removeChar(s,'n');
			removeChar(s,'i');
			removeChar(s,'n');
			removeChar(s,'e');
		}
	}
	return sum;
}
int main()
{
//	string s="ehfrzeevteeonoir";
string s="two";
	cout<<fu(s);
}
