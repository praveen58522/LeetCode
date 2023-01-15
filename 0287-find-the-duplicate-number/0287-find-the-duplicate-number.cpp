class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        set<int> n;
        int i;
        for(i=0;i<nums.size();i++)
        {
            int a=n.size();
            n.insert(nums[i]);
            if(n.size()==a) break;
        }
        return nums[i];
    }
};