class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int minp=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minp=min(prices[i],minp);
            mp=max(prices[i]-minp,mp);
        }
        return mp;    
}
};
