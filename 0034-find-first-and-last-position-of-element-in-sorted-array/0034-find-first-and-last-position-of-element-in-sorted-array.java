class Solution {
    public int[] searchRange(int[] nums, int target) {
        int arr[]=new int[2];
        arr[0]=findFirst(nums,target);
        arr[1]=findLast(nums,target);
        return arr;
    }
    private int findFirst(int[] arr, int target){
        int start=0;
        int end=arr.length-1;
        int index=-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]<target){
                start=mid+1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                index=mid;
                end=mid-1;
            }
        }
        return index;
    }
    private int findLast(int[] arr, int target){
        int start=0;
        int end=arr.length-1;
        int index=-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]<target){
                start=mid+1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                index=mid;
                start=mid+1;
            }
        }
        return index;
    }
}