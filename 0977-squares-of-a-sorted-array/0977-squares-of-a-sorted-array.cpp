class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        multiset<int> ans;
        multiset<int>:: iterator itr;

        for(int i=0;i<nums.size();i++)
        ans.insert(abs(nums[i]*nums[i]));

        int i=0;
        for(itr=ans.begin();itr!=ans.end();itr++)
        nums[i++]=*itr;
        
       return nums; 
    }
};