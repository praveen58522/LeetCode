class Solution {
    public int[] searchRange(int[] nums, int target) {
        int ans [] = {-1, -1};
        int count = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] == target && count == 0) {
                ans[0] = i;
                ans[1] = i;
                count++;
            }
            else if(nums[i] == target && count != 0) {
                ans[1] = i; 
            }
        }
        return ans;
    }
}