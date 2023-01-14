class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
      vector<int> ans(nums.size(),1);
        
        for(int i=0,prod = 1;i<nums.size();prod*=nums[i++])
        {
            ans[i]*=prod;
        }
        for (int i=nums.size()-1,prod=1;i>=0;prod*=nums[i--]) 
        {
            ans[i]*=prod;
        }
        return ans;  
    }
};