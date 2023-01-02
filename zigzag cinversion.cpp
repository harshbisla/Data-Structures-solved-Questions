string convert(string s, int numRows) {
       int  x=0;
        string ans[numRows];
        int r=0;
        int i=0;
        while(i<s.size())
        {
                if(numRows==1)
                {
                    return s;
                }
                else if(numRows==2)
                {
                    ans[i%numRows].push_back(s[i]);   
                }
                else
                {

                    if(x<numRows)
                    {
                        ans[x].push_back(s[i]);
                        x++;
                        r++;
                    }

                    else if(x==numRows+(numRows-2)-1)
                    {
                        ans[1].push_back(s[i]);
                        x=0;
                        r=0;
                    }
                    else
                    {
                        if(r==numRows)
                            r=r-2;
                        else
                            r--;
                        ans[r].push_back(s[i]);
                        x++;
                    }




                }
            i++;
            
        }
        for(int i=1;i<numRows;i++)
        {
            ans[0]=ans[0]+ans[i];
        }
        return ans[0];
    }            
