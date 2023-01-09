class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
        int ans=0,res=prices[0],n=prices.size();
        for(int i=1;i<n;i++)
        {
            if(prices[i]<res)
                res=prices[i];
            else if(prices[i]-res>ans){
                ans=prices[i]-res;
            }
        }
        return ans;
    }
};