class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;
        int sc=0;
        int ec=matrix[0].size()-1;
        int sr=0;
        int er=matrix.size()-1;
        int r=0;
        int c=0;
        while(sr<=er || sc<=ec)
        {
            while(c<ec)
        {
            ans.push_back(matrix[r][c]);
            c++;
        }
        sr++;
            if(sr>er || sc>ec)
                break;
        while(r<er)
        {
            ans.push_back(matrix[r][c]);
            r++;
            
        }
        ec--;
            if(sr>er || sc>ec)
                break;
        while(c>sc)
        {
            ans.push_back(matrix[r][c]);
            c--;
            
        }
        er--;
            if(sr>er || sc>ec)
                break;
        
        while(r>sr)
        {
            ans.push_back(matrix[r][c]);
            r--;
            
        }
        sc++;
            if(sr>er || sc>ec)
                break;

        }
        ans.push_back(matrix[r][c]);
    return ans;
                
    }
    
};
