class Solution {
public:
    bool isAnagram(string s, string t) {
        int cs[26],ct[26];
        for(int i =0;i<26;i++)
        {
            cs[i]=0;
            ct[i]=0;
        }
        for(int i=0;i<s.length();i++)
        {
            cs[s[i]-97]++;
        }
        for(int i=0;i<t.length();i++)
        {
            ct[t[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(ct[i]!=cs[i])
            {
                return false;
            }
        }
        return true;
    }
};
