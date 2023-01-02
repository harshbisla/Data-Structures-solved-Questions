    #include<iostream>
    #include<string>
    using namespace std;
	string rearrangeString(string str)
    {
        //code here
        int a[26];
        for(int i=0;i<26;i++)
        {
            a[i]=0;
        }
        for(int i=0;i<str.size();i++)
        {
            a[int(str[i])-97]++;
        }
        int i=0;
        int x=0;
        int s=0;
        for(int i=0;i<26;i++)
        {
            s+=a[i];
        }
        while(s!=0 && x<str.size() && i<26)
        {
            
            if(x==str.size()-1 ||  x==str.size()-2)
            {
                x=1;
                continue;
            }
            if(a[i]==0)
            {
                i++;
                continue;
            }
            str[x]=i+97;
            x=x+2;
            a[i]--;
            s--;
        }
        return str;
    }
    int main()
    {
    	string st="aaaahhhhh";
    	cout<<rearrangeString(st);
    	return 1;
    	
	}
