#include<iostream>
#include<string>
using namespace std;
    bool isPalindrome(string s) {
        char c[s.size()+1];
        int i;
        int j=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]<=90 && s[i]>=65 || s[i]<=122 && s[i]>=97 || s[i]<=57 && s[i]>=48)
            {
                c[j]=s[i];
                j++;
            }
        }
        int x=0;
        while(x<j)
        {
            if(isupper(c[x]))
            {
                c[x]=c[x]+32;
            }
            x++;
        }
        if(j==0 || j==1)
        {
            return true;
        }
        for(int i=0;i<=j/2;i++)
        {
            if(c[i]!=c[j-i-1])
            {
                return false;
            }
            else
            {
                continue;
            }
        }
        return true;
    }
int main()
{
	string s;
	cout<<"enter the string "<<endl;
	cin>>s;
	cout<<isPalindrome(s);
}

