#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

	
	
	int xx(string s)
	{
	    int dp[s.size()+1];
        dp[0]=0;
        dp[1]=1;
        unordered_map<char,int> mp;
        mp[s[0]]++;
        int m=1;
        int mm=0;
        for(int i=2;i<=s.size();i++)
        {
            mp[s[i-1]]++;
            bool r;
            for(auto i:mp)
            {
                if(i.second>=2)//agar element repeat hotaa hai
                {
                    r=false;
                    break;
                }
                else
                {
                    r=true;
                }
            }
                if(r==false)//agar element reppeat ho rha hai
                {
                    //hashmap khali krdo aur max ko check krlo i sach me max h ya nhi
                    //map khali
                    for(auto i:mp)
                    {
                        mp.erase(i.first);
                    }
                    
                    dp[i]=max(m,dp[i-1]);
                    mp[s[i-1]]++;
                    m=1;
                }
                else   //nhi to ye krdo
                {
                    m++;
                    if(m>mm)
                        mm=m;
                    dp[i]=mm;
                }
                    
                
        }
        return dp[s.size()];
    }
    int main()
    {
    	string s;
    	cin>>s;
    	cout<xx(s);
	}
