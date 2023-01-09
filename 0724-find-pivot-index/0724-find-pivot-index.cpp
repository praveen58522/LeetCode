class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            int suml=0,sumr=0;
            for(int a=i-1;a>=0;a--)
                suml+=nums[a];
            for(int b=i+1;b<nums.size();b++)
                sumr+=nums[b];
            if(suml==sumr)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};